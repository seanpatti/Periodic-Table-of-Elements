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

#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#include <QDialog>

namespace Ui {
class aboutDialog;
}

class aboutDialog : public QDialog
{
    Q_OBJECT

public:
    explicit aboutDialog(QWidget *parent = 0);
    ~aboutDialog();

private slots:
    void on_close_Button_clicked();

    void on_lbl_prodInfo_linkActivated(const QString &link);

    // Slot to receive the program version string.
    void receiveV(QString v);

private:
    Ui::aboutDialog *ui;
};

#endif // ABOUTDIALOG_H
