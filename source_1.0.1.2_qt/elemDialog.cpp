/*   This file is part of periodic_table. <Copyrignt © 2016 Sean Patti Projects>
 *
 *   periodic_table is free software: you can redistribute it
 *   it under the terms of the GNU Lesser General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at our option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU Lesser General Public License for more details.
 *
 *   You should have received a copy of the GNU Lesser General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "elemDialog.h"
#include "mainwindow.h"
#include "ui_elemDialog.h"
#include <QString>
#include <QSql>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>



elemDialog::elemDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::elemDialog)
{
    ui->setupUi(this);

    // Remove the ? from the dialog form
    setWindowFlags(windowFlags() &~Qt::WindowContextHelpButtonHint);
}

elemDialog::~elemDialog()
{
    delete ui;
}

void connectDB()
{
    // Setup the database connection.
    // *** TODO: The database name must be changed for the final relese.
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "ptoe_connect");
    db.setDatabaseName("ptoe.db");

    if(!db.open())
    {
        db.setDatabaseName("ptoe.db");
    }
    else
    {
        db.close();
    }
}

void elemDialog::receiveName(QString s)
{
    // Get the element name from the slot (QString s).
    ui->lbl_name->setText(s);
    this->setWindowTitle("Details on " + s);

    connectDB();

        QSqlQuery qry(QSqlDatabase::database("ptoe_connect"));

        // Query the database for atomic information on the selected element. Provided by (s).
        if(qry.exec("SELECT * FROM atomic WHERE Name='" + s + "'"))
        {
            while(qry.next())
            {
                // Load the electron shell image form the database.
                QByteArray outByteArray = qry.value(10).toByteArray();
                QPixmap outPixmap = QPixmap();
                outPixmap.loadFromData(outByteArray);

                ui->lbl_atNumber->setText(qry.value(2).toString());
                ui->lbl_Symbol->setText(qry.value(3).toString());
                ui->lbl_Weight->setText(qry.value(4).toString());
                ui->lbl_ec->setText(qry.value(5).toString());
                ui->lbl_Radius->setText(qry.value(6).toString());
                ui->lbl_Melt->setText(qry.value(7).toString());
                ui->lbl_Boil->setText(qry.value(8).toString());
                ui->lbl_Ox->setText(qry.value(9).toString());
                ui->lbl_pic->setPixmap(outPixmap);
            }
        }

        else
        {
            // On fail. Give us a reasonable error.
            QMessageBox::critical(this, "Periodic Table of Elements Database Error:", qry.lastError().text());
            QSqlDatabase::removeDatabase("ptoe_connect");
            return;
        }
        // Query the database for element information on the selected element provided by (s).
        if(qry.exec("SELECT * FROM elements WHERE Name='" + s + "'"))
        {
            while(qry.next())
            {
                ui->lbl_isotopes->setText(qry.value(2).toString());
                ui->lbl_isotopes2->setText(qry.value(3).toString());
                ui->lbl_facts->setText(qry.value(4).toString());
                ui->lbl_trunk->setText(qry.value(5).toString());
            }
        }
        else
        {
            // On fail. Give us a reasonable error.
            QMessageBox::critical(this, "Periodic Table of Elements Database Error:", qry.lastError().text());
            QSqlDatabase::removeDatabase("ptoe_connect");
            return;
        }
        // Remove the database connection name.
        QSqlDatabase::removeDatabase("ptoe_connect");
}

void elemDialog::on_closeButton_clicked()
{
    this->close();
}
