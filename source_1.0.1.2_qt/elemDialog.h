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

#ifndef ELEMDIALOG_H
#define ELEMDIALOG_H

#include <QDialog>


namespace Ui {
class elemDialog;
}

class elemDialog : public QDialog
{
    Q_OBJECT

public:
    explicit elemDialog(QWidget *parent = 0);
    ~elemDialog();

private slots:

    // Slot to receive the element name.
    void receiveName(QString);

    void on_closeButton_clicked();

private:
    Ui::elemDialog *ui;

};

#endif // ELEMIALOG_H
