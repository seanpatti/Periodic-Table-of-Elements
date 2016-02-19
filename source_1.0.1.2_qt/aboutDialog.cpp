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

#include "aboutDialog.h"
#include "ui_aboutDialog.h"


aboutDialog::aboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aboutDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("About: Periodic Table of Elements");

    // Remove the ? from the dialog form
    setWindowFlags(windowFlags() &~Qt::WindowContextHelpButtonHint);
}

aboutDialog::~aboutDialog()
{
    delete ui;
}

void aboutDialog::on_close_Button_clicked()
{
    this->close();
}

// For this to work, disable the "openExternalLinks" property of the QLabel
void aboutDialog::on_lbl_prodInfo_linkActivated(const QString &link)
{
    link == "http://www.gnu.org/licenses/lgpl-3.0.en.html";
}

// Get version information from the slot.
void aboutDialog::receiveV(QString v)
{
    ui->lbl_Version->setText("Version: " + v);
}
