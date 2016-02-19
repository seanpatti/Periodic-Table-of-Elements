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

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "elemDialog.h"
#include "aboutDialog.h"
#include "up2date.h"
#include <QRect>
#include <QApplication>
#include <QDesktopWidget>


// ////////////////////////////////////////////////////////////////////////////////////
// Variable to hold the program version. This is program wide, so just change it here.

QString v = "1.0.1.2";

// ////////////////////////////////////////////////////////////////////////////////////


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("Periodic Table of Elements  -- Version: " + v);

    // Set the MainWindow center screen.
    QRect screenGeometry = QApplication::desktop()->screenGeometry();
    int x = (screenGeometry.width() - MainWindow::width()) /2;
    int y = (screenGeometry.height() - MainWindow::height()) /2;
    MainWindow::move(x, y);
    MainWindow::show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getVer(QString)
{
    v = v;
}

void MainWindow::setElement(QString s)
{
    // Dialog setup.
    dialog = new elemDialog(this);
    dialog->setModal(true);
    dialog->show();

    // Connector for the elemDialog to receive the element name.
    connect(this, SIGNAL(sendName(QString)), dialog, SLOT(receiveName(QString)));

    // Emitter.
    emit sendName(s);
}

void MainWindow::on_h_Button_clicked()
{

    QString s;
    s = "Hydrogen";

    setElement(s);

}

void MainWindow::on_li_Button_clicked()
{
    QString s;
    s = "Lithium";

    setElement(s);
}

void MainWindow::on_na_Button_clicked()
{
    QString s;
    s = "Sodium";

    setElement(s);
}

void MainWindow::on_k_Button_clicked()
{
    QString s;
    s = "Potassium";

    setElement(s);
}

void MainWindow::on_rb_Button_clicked()
{
    QString s;
    s = "Rubidium";

    setElement(s);
}

void MainWindow::on_cs_Button_clicked()
{
    QString s;
    s = "Cesium";

    setElement(s);
}

void MainWindow::on_fr_Button_clicked()
{
    QString s;
    s = "Francium";

    setElement(s);
}

void MainWindow::on_la_Button_clicked()
{
    QString s;
    s = "Lanthanum";

    setElement(s);
}

void MainWindow::on_ac_Button_clicked()
{
    QString s;
    s = "Actinium";

    setElement(s);
}

void MainWindow::on_be_Button_clicked()
{
    QString s;
    s = "Beryllium";

    setElement(s);
}

void MainWindow::on_mg_Button_clicked()
{
    QString s;
    s = "Magnesium";

    setElement(s);
}

void MainWindow::on_ca_Button_clicked()
{
    QString s;
    s = "Calcium";

    setElement(s);
}

void MainWindow::on_sr_Button_clicked()
{
    QString s;
    s = "Strontium";

    setElement(s);
}

void MainWindow::on_ba_Button_clicked()
{
    QString s;
    s = "Barium";

    setElement(s);
}

void MainWindow::on_ra_Button_clicked()
{
    QString s;
    s = "Radium";

    setElement(s);
}

void MainWindow::on_ce_Button_clicked()
{
    QString s;
    s = "Cerium";

    setElement(s);
}

void MainWindow::on_th_Button_clicked()
{
    QString s;
    s = "Thorium";

    setElement(s);
}

void MainWindow::on_sc_Button_clicked()
{
    QString s;
    s = "Scandium";

    setElement(s);
}

void MainWindow::on_y_Button_clicked()
{
    QString s;
    s = "Yttrium";

    setElement(s);
}

void MainWindow::on_pr_Button_clicked()
{
    QString s;
    s = "Praseodymium";

    setElement(s);
}

void MainWindow::on_pa_Button_clicked()
{
    QString s;
    s = "Protactinium";

    setElement(s);
}

void MainWindow::on_ti_Button_clicked()
{
    QString s;
    s = "Titanium";

    setElement(s);
}

void MainWindow::on_zr_Button_clicked()
{
    QString s;
    s = "Zirconium";

    setElement(s);
}

void MainWindow::on_hf_Button_clicked()
{
    QString s;
    s = "Hafnium";

    setElement(s);
}

void MainWindow::on_rf_Button_clicked()
{
    QString s;
    s = "Rutherfordium";

    setElement(s);
}

void MainWindow::on_nd_Button_clicked()
{
    QString s;
    s = "Neodymium";

    setElement(s);
}

void MainWindow::on_u_Button_clicked()
{
    QString s;
    s = "Uranium";

    setElement(s);
}

void MainWindow::on_v_Button_clicked()
{
    QString s;
    s = "Vanadium";

    setElement(s);
}

void MainWindow::on_nb_Button_clicked()
{
    QString s;
    s = "Niobium";

    setElement(s);
}

void MainWindow::on_ta_Button_clicked()
{
    QString s;
    s = "Tantalum";

    setElement(s);
}

void MainWindow::on_db_Button_clicked()
{
    QString s;
    s = "Dubnium";

    setElement(s);
}

void MainWindow::on_pm_Button_clicked()
{
    QString s;
    s = "Promethium";

    setElement(s);
}

void MainWindow::on_np_Button_clicked()
{
    QString s;
    s = "Neptunium";

    setElement(s);
}

void MainWindow::on_cr_Button_clicked()
{
    QString s;
    s = "Chromium";

    setElement(s);
}

void MainWindow::on_mo_Button_clicked()
{
    QString s;
    s = "Molybdenum";

    setElement(s);
}

void MainWindow::on_w_Button_clicked()
{
    QString s;
    s = "Tungsten";

    setElement(s);
}

void MainWindow::on_sg_Button_clicked()
{
    QString s;
    s = "Seaborgium";

    setElement(s);
}

void MainWindow::on_sm_Button_clicked()
{
    QString s;
    s = "Samarium";

    setElement(s);
}

void MainWindow::on_pu_Button_clicked()
{
    QString s;
    s = "Plutonium";

    setElement(s);
}

void MainWindow::on_mn_Button_clicked()
{
    QString s;
    s = "Manganese";

    setElement(s);
}

void MainWindow::on_tc_Button_clicked()
{
    QString s;
    s = "Technetium";

    setElement(s);
}

void MainWindow::on_re_Button_clicked()
{
    QString s;
    s = "Rhenium";

    setElement(s);
}

void MainWindow::on_bh_Button_clicked()
{
    QString s;
    s = "Bohrium";

    setElement(s);
}

void MainWindow::on_eu_Button_clicked()
{
    QString s;
    s = "Europium";

    setElement(s);
}

void MainWindow::on_am_Button_clicked()
{
    QString s;
    s = "Americium";

    setElement(s);
}

void MainWindow::on_fe_Button_clicked()
{
    QString s;
    s = "Iron";

    setElement(s);
}

void MainWindow::on_ru_Button_clicked()
{
    QString s;
    s = "Ruthenium";

    setElement(s);
}

void MainWindow::on_os_Button_clicked()
{
    QString s;
    s = "Osmium";

    setElement(s);
}

void MainWindow::on_hs_Button_clicked()
{
    QString s;
    s = "Hassium";

    setElement(s);
}

void MainWindow::on_gd_Button_clicked()
{
    QString s;
    s = "Gadolinium";

    setElement(s);
}

void MainWindow::on_cm_Button_clicked()
{
    QString s;
    s = "Curium";

    setElement(s);
}

void MainWindow::on_co_Button_clicked()
{
    QString s;
    s = "Cobalt";

    setElement(s);
}

void MainWindow::on_rh_Button_clicked()
{
    QString s;
    s = "Rhodium";

    setElement(s);
}

void MainWindow::on_ir_Button_clicked()
{
    QString s;
    s = "Iridium";

    setElement(s);
}

void MainWindow::on_mt_Button_clicked()
{
    QString s;
    s = "Meitnerium";

    setElement(s);
}

void MainWindow::on_tb_Button_clicked()
{
    QString s;
    s = "Terbium";

    setElement(s);
}

void MainWindow::on_bk_Button_clicked()
{
    QString s;
    s = "Berkelium";

    setElement(s);
}

void MainWindow::on_ni_Button_clicked()
{
    QString s;
    s = "Nickel";

    setElement(s);
}

void MainWindow::on_pd_Button_2_clicked()
{
    QString s;
    s = "Palladium";

    setElement(s);
}

void MainWindow::on_pt_Button_clicked()
{
    QString s;
    s = "Platinum";

    setElement(s);
}

void MainWindow::on_ds_Button_clicked()
{
    QString s;
    s = "Darmstadtium";

    setElement(s);
}

void MainWindow::on_dy_Button_clicked()
{
    QString s;
    s = "Dysprosium";

    setElement(s);
}

void MainWindow::on_cf_Button_clicked()
{
    QString s;
    s = "Californium";

    setElement(s);
}

void MainWindow::on_cu_Button_clicked()
{
    QString s;
    s = "Copper";

    setElement(s);
}

void MainWindow::on_ag_Button_clicked()
{
    QString s;
    s = "Silver";

    setElement(s);
}

void MainWindow::on_au_Button_clicked()
{
    QString s;
    s = "Gold";

    setElement(s);
}

void MainWindow::on_rg_Button_clicked()
{
    QString s;
    s = "Roentgenium";

    setElement(s);
}

void MainWindow::on_ho_Button_clicked()
{
    QString s;
    s = "Holmium";

    setElement(s);
}

void MainWindow::on_es_Button_clicked()
{
    QString s;
    s = "Einsteinium";

    setElement(s);
}

void MainWindow::on_zn_Button_clicked()
{
    QString s;
    s = "Zinc";

    setElement(s);
}

void MainWindow::on_cd_Button_clicked()
{
    QString s;
    s = "Cadmium";

    setElement(s);
}

void MainWindow::on_hg_Button_clicked()
{
    QString s;
    s = "Mercury";

    setElement(s);
}

void MainWindow::on_cn_Button_clicked()
{
    QString s;
    s = "Copernicium";

    setElement(s);
}

void MainWindow::on_er_Button_clicked()
{
    QString s;
    s = "Erbium";

    setElement(s);
}

void MainWindow::on_fm_Button_clicked()
{
    QString s;
    s = "Fermium";

    setElement(s);
}

void MainWindow::on_b_Button_clicked()
{
    QString s;
    s = "Boron";

    setElement(s);
}

void MainWindow::on_al_Button_clicked()
{
    QString s;
    s = "Aluminum";

    setElement(s);
}

void MainWindow::on_ga_Button_clicked()
{
    QString s;
    s = "Gallium";

    setElement(s);
}

void MainWindow::on_ln_Button_clicked()
{
    QString s;
    s = "Indium";

    setElement(s);
}

void MainWindow::on_tl_Button_clicked()
{
    QString s;
    s = "Thallium";

    setElement(s);
}

void MainWindow::on_uut_Button_clicked()
{
    QString s;
    s = "Ununtrium";

    setElement(s);
}

void MainWindow::on_tm_Button_clicked()
{
    QString s;
    s = "Thulium";

    setElement(s);
}

void MainWindow::on_md_Button_clicked()
{
    QString s;
    s = "Mendelevium";

    setElement(s);
}

void MainWindow::on_c_Button_clicked()
{
    QString s;
    s = "Carbon";

    setElement(s);
}

void MainWindow::on_si_Button_clicked()
{
    QString s;
    s = "Silicon";

    setElement(s);
}

void MainWindow::on_ge_Button_clicked()
{
    QString s;
    s = "Germanium";

    setElement(s);
}

void MainWindow::on_sn_Button_clicked()
{
    QString s;
    s = "Tin";

    setElement(s);
}

void MainWindow::on_pd_Button_clicked()
{
    QString s;
    s = "Lead";

    setElement(s);
}

void MainWindow::on_fl_Button_clicked()
{
    QString s;
    s = "Flerovium";

    setElement(s);
}

void MainWindow::on_yb_Button_clicked()
{
    QString s;
    s = "Ytterbium";

    setElement(s);
}

void MainWindow::on_no_Button_clicked()
{
    QString s;
    s = "Nobelium";

    setElement(s);
}

void MainWindow::on_n_Button_clicked()
{
    QString s;
    s = "Nitrogen";

    setElement(s);
}

void MainWindow::on_p_Button_clicked()
{
    QString s;
    s = "Phosphorus";

    setElement(s);
}

void MainWindow::on_as_Button_clicked()
{
    QString s;
    s = "Arsenic";

    setElement(s);
}

void MainWindow::on_sb_Button_clicked()
{
    QString s;
    s = "Antimony";

    setElement(s);
}

void MainWindow::on_bi_Button_clicked()
{
    QString s;
    s = "Bismuth";

    setElement(s);
}

void MainWindow::on_uup_Button_clicked()
{
    QString s;
    s = "Ununpentium";

    setElement(s);
}

void MainWindow::on_lu_Button_clicked()
{
    QString s;
    s = "Lutetium";

    setElement(s);
}

void MainWindow::on_lr_Button_clicked()
{
    QString s;
    s = "Lawrencium";

    setElement(s);
}

void MainWindow::on_o_Button_clicked()
{
    QString s;
    s = "Oxygen";

    setElement(s);
}

void MainWindow::on_s_Button_clicked()
{
    QString s;
    s = "Sulfur";

    setElement(s);
}

void MainWindow::on_se_Button_clicked()
{
    QString s;
    s = "Selenium";

    setElement(s);
}

void MainWindow::on_te_Button_clicked()
{
    QString s;
    s = "Tellurium";

    setElement(s);
}

void MainWindow::on_po_Button_clicked()
{
    QString s;
    s = "Polonium";

    setElement(s);
}

void MainWindow::on_lv_Button_clicked()
{
    QString s;
    s = "Livermorium";

    setElement(s);
}

void MainWindow::on_f_Button_clicked()
{
    QString s;
    s = "Fluorine";

    setElement(s);
}

void MainWindow::on_cl_Button_clicked()
{
    QString s;
    s = "Chlorine";

    setElement(s);
}

void MainWindow::on_br_Button_clicked()
{
    QString s;
    s = "Bromine";

    setElement(s);
}

void MainWindow::on_l_Button_clicked()
{
    QString s;
    s = "Iodine";

    setElement(s);
}

void MainWindow::on_at_Button_clicked()
{
    QString s;
    s = "Astatine";

    setElement(s);
}

void MainWindow::on_uus_Button_clicked()
{
    QString s;
    s = "Ununseptium";

    setElement(s);
}

void MainWindow::on_he_Button_clicked()
{
    QString s;
    s = "Helium";

    setElement(s);
}

void MainWindow::on_ne_Button_clicked()
{
    QString s;
    s = "Neon";

    setElement(s);
}

void MainWindow::on_ar_Button_clicked()
{
    QString s;
    s = "Argon";

    setElement(s);
}

void MainWindow::on_kr_Button_clicked()
{
    QString s;
    s = "Krypton";

    setElement(s);
}

void MainWindow::on_xe_Button_clicked()
{
    QString s;
    s = "Xenon";

    setElement(s);
}

void MainWindow::on_rn_Button_clicked()
{
    QString s;
    s = "Radon";

    setElement(s);
}

void MainWindow::on_uuo_Button_clicked()
{
    QString s;
    s = "Ununoctium";

    setElement(s);
}

void MainWindow::on_actionAbout_triggered()
{
    about = new aboutDialog(this);
    about->setModal(true);
    about->show();

    // Connector for the dialog to receive the program version.
    connect(this, SIGNAL(sendV(QString)), about, SLOT(receiveV(QString)));

    // Emitter.
    emit sendV(v);
}

void MainWindow::on_actionExit_triggered()
{
    this->close();
}


void MainWindow::on_am_Button_2_pressed()
{
    ui->h_Button->setEnabled(false);

    ui->li_Button->setEnabled(true);

    ui->na_Button->setEnabled(true);

    ui->k_Button->setEnabled(true);

    ui->rb_Button->setEnabled(true);

    ui->cs_Button->setEnabled(true);

    ui->fr_Button->setEnabled(true);

    ui->la_Button->setEnabled(false);

    ui->ac_Button->setEnabled(false);

    ui->be_Button->setEnabled(false);

    ui->mg_Button->setEnabled(false);

    ui->ca_Button->setEnabled(false);

    ui->sr_Button->setEnabled(false);

    ui->ba_Button->setEnabled(false);

    ui->ra_Button->setEnabled(false);

    ui->ce_Button->setEnabled(false);

    ui->th_Button->setEnabled(false);

    ui->sc_Button->setEnabled(false);

    ui->y_Button->setEnabled(false);

    ui->pr_Button->setEnabled(false);

    ui->pa_Button->setEnabled(false);

    ui->ti_Button->setEnabled(false);

    ui->zr_Button->setEnabled(false);

    ui->hf_Button->setEnabled(false);

    ui->rf_Button->setEnabled(false);

    ui->nd_Button->setEnabled(false);

    ui->u_Button->setEnabled(false);

    ui->v_Button->setEnabled(false);

    ui->nb_Button->setEnabled(false);

    ui->ta_Button->setEnabled(false);

    ui->db_Button->setEnabled(false);

    ui->pm_Button->setEnabled(false);

    ui->np_Button->setEnabled(false);

    ui->cr_Button->setEnabled(false);

    ui->mo_Button->setEnabled(false);

    ui->w_Button->setEnabled(false);

    ui->sg_Button->setEnabled(false);

    ui->sm_Button->setEnabled(false);

    ui->pu_Button->setEnabled(false);

    ui->mn_Button->setEnabled(false);

    ui->tc_Button->setEnabled(false);

    ui->re_Button->setEnabled(false);

    ui->bh_Button->setEnabled(false);

    ui->eu_Button->setEnabled(false);

    ui->am_Button->setEnabled(false);

    ui->fe_Button->setEnabled(false);

    ui->ru_Button->setEnabled(false);

    ui->os_Button->setEnabled(false);

    ui->hs_Button->setEnabled(false);

    ui->gd_Button->setEnabled(false);

    ui->cm_Button->setEnabled(false);

    ui->co_Button->setEnabled(false);

    ui->rh_Button->setEnabled(false);

    ui->ir_Button->setEnabled(false);

    ui->mt_Button->setEnabled(false);

    ui->tb_Button->setEnabled(false);

    ui->bk_Button->setEnabled(false);

    ui->ni_Button->setEnabled(false);

    ui->pd_Button_2->setEnabled(false);

    ui->pt_Button->setEnabled(false);

    ui->ds_Button->setEnabled(false);

    ui->dy_Button->setEnabled(false);

    ui->cf_Button->setEnabled(false);

    ui->cu_Button->setEnabled(false);

    ui->ag_Button->setEnabled(false);

    ui->au_Button->setEnabled(false);

    ui->rg_Button->setEnabled(false);

    ui->ho_Button->setEnabled(false);

    ui->es_Button->setEnabled(false);

    ui->zn_Button->setEnabled(false);

    ui->cd_Button->setEnabled(false);

    ui->hg_Button->setEnabled(false);

    ui->cn_Button->setEnabled(false);

    ui->er_Button->setEnabled(false);

    ui->fm_Button->setEnabled(false);

    ui->b_Button->setEnabled(false);

    ui->al_Button->setEnabled(false);

    ui->ga_Button->setEnabled(false);

    ui->ln_Button->setEnabled(false);

    ui->tl_Button->setEnabled(false);

    ui->uut_Button->setEnabled(false);

    ui->tm_Button->setEnabled(false);

    ui->md_Button->setEnabled(false);

    ui->c_Button->setEnabled(false);

    ui->si_Button->setEnabled(false);

    ui->ge_Button->setEnabled(false);

    ui->sn_Button->setEnabled(false);

    ui->pd_Button->setEnabled(false);

    ui->fl_Button->setEnabled(false);

    ui->yb_Button->setEnabled(false);

    ui->no_Button->setEnabled(false);

    ui->n_Button->setEnabled(false);

    ui->p_Button->setEnabled(false);

    ui->as_Button->setEnabled(false);

    ui->sb_Button->setEnabled(false);

    ui->bi_Button->setEnabled(false);

    ui->uup_Button->setEnabled(false);

    ui->lu_Button->setEnabled(false);

    ui->lr_Button->setEnabled(false);

    ui->o_Button->setEnabled(false);

    ui->s_Button->setEnabled(false);

    ui->se_Button->setEnabled(false);

    ui->te_Button->setEnabled(false);

    ui->po_Button->setEnabled(false);

    ui->lv_Button->setEnabled(false);

    ui->f_Button->setEnabled(false);

    ui->cl_Button->setEnabled(false);

    ui->br_Button->setEnabled(false);

    ui->l_Button->setEnabled(false);

    ui->at_Button->setEnabled(false);

    ui->uus_Button->setEnabled(false);

    ui->he_Button->setEnabled(false);

    ui->ne_Button->setEnabled(false);

    ui->ar_Button->setEnabled(false);

    ui->kr_Button->setEnabled(false);

    ui->xe_Button->setEnabled(false);

    ui->rn_Button->setEnabled(false);

    ui->uuo_Button->setEnabled(false);

    ui->lan_Button->setEnabled(false);

    ui->act_Button->setEnabled(false);
}

void MainWindow::on_am_Button_2_released()
{
    ui->h_Button->setEnabled(true);

    ui->li_Button->setEnabled(true);

    ui->na_Button->setEnabled(true);

    ui->k_Button->setEnabled(true);

    ui->rb_Button->setEnabled(true);

    ui->cs_Button->setEnabled(true);

    ui->fr_Button->setEnabled(true);

    ui->la_Button->setEnabled(true);

    ui->ac_Button->setEnabled(true);

    ui->be_Button->setEnabled(true);

    ui->mg_Button->setEnabled(true);

    ui->ca_Button->setEnabled(true);

    ui->sr_Button->setEnabled(true);

    ui->ba_Button->setEnabled(true);

    ui->ra_Button->setEnabled(true);

    ui->ce_Button->setEnabled(true);

    ui->th_Button->setEnabled(true);

    ui->sc_Button->setEnabled(true);

    ui->y_Button->setEnabled(true);

    ui->pr_Button->setEnabled(true);

    ui->pa_Button->setEnabled(true);

    ui->ti_Button->setEnabled(true);

    ui->zr_Button->setEnabled(true);

    ui->hf_Button->setEnabled(true);

    ui->rf_Button->setEnabled(true);

    ui->nd_Button->setEnabled(true);

    ui->u_Button->setEnabled(true);

    ui->v_Button->setEnabled(true);

    ui->nb_Button->setEnabled(true);

    ui->ta_Button->setEnabled(true);

    ui->db_Button->setEnabled(true);

    ui->pm_Button->setEnabled(true);

    ui->np_Button->setEnabled(true);

    ui->cr_Button->setEnabled(true);

    ui->mo_Button->setEnabled(true);

    ui->w_Button->setEnabled(true);

    ui->sg_Button->setEnabled(true);

    ui->sm_Button->setEnabled(true);

    ui->pu_Button->setEnabled(true);

    ui->mn_Button->setEnabled(true);

    ui->tc_Button->setEnabled(true);

    ui->re_Button->setEnabled(true);

    ui->bh_Button->setEnabled(true);

    ui->eu_Button->setEnabled(true);

    ui->am_Button->setEnabled(true);

    ui->fe_Button->setEnabled(true);

    ui->ru_Button->setEnabled(true);

    ui->os_Button->setEnabled(true);

    ui->hs_Button->setEnabled(true);

    ui->gd_Button->setEnabled(true);

    ui->cm_Button->setEnabled(true);

    ui->co_Button->setEnabled(true);

    ui->rh_Button->setEnabled(true);

    ui->ir_Button->setEnabled(true);

    ui->mt_Button->setEnabled(true);

    ui->tb_Button->setEnabled(true);

    ui->bk_Button->setEnabled(true);

    ui->ni_Button->setEnabled(true);

    ui->pd_Button_2->setEnabled(true);

    ui->pt_Button->setEnabled(true);

    ui->ds_Button->setEnabled(true);

    ui->dy_Button->setEnabled(true);

    ui->cf_Button->setEnabled(true);

    ui->cu_Button->setEnabled(true);

    ui->ag_Button->setEnabled(true);

    ui->au_Button->setEnabled(true);

    ui->rg_Button->setEnabled(true);

    ui->ho_Button->setEnabled(true);

    ui->es_Button->setEnabled(true);

    ui->zn_Button->setEnabled(true);

    ui->cd_Button->setEnabled(true);

    ui->hg_Button->setEnabled(true);

    ui->cn_Button->setEnabled(true);

    ui->er_Button->setEnabled(true);

    ui->fm_Button->setEnabled(true);

    ui->b_Button->setEnabled(true);

    ui->al_Button->setEnabled(true);

    ui->ga_Button->setEnabled(true);

    ui->ln_Button->setEnabled(true);

    ui->tl_Button->setEnabled(true);

    ui->uut_Button->setEnabled(true);

    ui->tm_Button->setEnabled(true);

    ui->md_Button->setEnabled(true);

    ui->c_Button->setEnabled(true);

    ui->si_Button->setEnabled(true);

    ui->ge_Button->setEnabled(true);

    ui->sn_Button->setEnabled(true);

    ui->pd_Button->setEnabled(true);

    ui->fl_Button->setEnabled(true);

    ui->yb_Button->setEnabled(true);

    ui->no_Button->setEnabled(true);

    ui->n_Button->setEnabled(true);

    ui->p_Button->setEnabled(true);

    ui->as_Button->setEnabled(true);

    ui->sb_Button->setEnabled(true);

    ui->bi_Button->setEnabled(true);

    ui->uup_Button->setEnabled(true);

    ui->lu_Button->setEnabled(true);

    ui->lr_Button->setEnabled(true);

    ui->o_Button->setEnabled(true);

    ui->s_Button->setEnabled(true);

    ui->se_Button->setEnabled(true);

    ui->te_Button->setEnabled(true);

    ui->po_Button->setEnabled(true);

    ui->lv_Button->setEnabled(true);

    ui->f_Button->setEnabled(true);

    ui->cl_Button->setEnabled(true);

    ui->br_Button->setEnabled(true);

    ui->l_Button->setEnabled(true);

    ui->at_Button->setEnabled(true);

    ui->uus_Button->setEnabled(true);

    ui->he_Button->setEnabled(true);

    ui->ne_Button->setEnabled(true);

    ui->ar_Button->setEnabled(true);

    ui->kr_Button->setEnabled(true);

    ui->xe_Button->setEnabled(true);

    ui->rn_Button->setEnabled(true);

    ui->uuo_Button->setEnabled(true);

    ui->lan_Button->setEnabled(true);

    ui->act_Button->setEnabled(true);
}

void MainWindow::on_ae_Button_pressed()
{
    ui->h_Button->setEnabled(false);

    ui->li_Button->setEnabled(false);

    ui->na_Button->setEnabled(false);

    ui->k_Button->setEnabled(false);

    ui->rb_Button->setEnabled(false);

    ui->cs_Button->setEnabled(false);

    ui->fr_Button->setEnabled(false);

    ui->la_Button->setEnabled(false);

    ui->ac_Button->setEnabled(false);

    ui->be_Button->setEnabled(true);

    ui->mg_Button->setEnabled(true);

    ui->ca_Button->setEnabled(true);

    ui->sr_Button->setEnabled(true);

    ui->ba_Button->setEnabled(true);

    ui->ra_Button->setEnabled(true);

    ui->ce_Button->setEnabled(false);

    ui->th_Button->setEnabled(false);

    ui->sc_Button->setEnabled(false);

    ui->y_Button->setEnabled(false);

    ui->pr_Button->setEnabled(false);

    ui->pa_Button->setEnabled(false);

    ui->ti_Button->setEnabled(false);

    ui->zr_Button->setEnabled(false);

    ui->hf_Button->setEnabled(false);

    ui->rf_Button->setEnabled(false);

    ui->nd_Button->setEnabled(false);

    ui->u_Button->setEnabled(false);

    ui->v_Button->setEnabled(false);

    ui->nb_Button->setEnabled(false);

    ui->ta_Button->setEnabled(false);

    ui->db_Button->setEnabled(false);

    ui->pm_Button->setEnabled(false);

    ui->np_Button->setEnabled(false);

    ui->cr_Button->setEnabled(false);

    ui->mo_Button->setEnabled(false);

    ui->w_Button->setEnabled(false);

    ui->sg_Button->setEnabled(false);

    ui->sm_Button->setEnabled(false);

    ui->pu_Button->setEnabled(false);

    ui->mn_Button->setEnabled(false);

    ui->tc_Button->setEnabled(false);

    ui->re_Button->setEnabled(false);

    ui->bh_Button->setEnabled(false);

    ui->eu_Button->setEnabled(false);

    ui->am_Button->setEnabled(false);

    ui->fe_Button->setEnabled(false);

    ui->ru_Button->setEnabled(false);

    ui->os_Button->setEnabled(false);

    ui->hs_Button->setEnabled(false);

    ui->gd_Button->setEnabled(false);

    ui->cm_Button->setEnabled(false);

    ui->co_Button->setEnabled(false);

    ui->rh_Button->setEnabled(false);

    ui->ir_Button->setEnabled(false);

    ui->mt_Button->setEnabled(false);

    ui->tb_Button->setEnabled(false);

    ui->bk_Button->setEnabled(false);

    ui->ni_Button->setEnabled(false);

    ui->pd_Button_2->setEnabled(false);

    ui->pt_Button->setEnabled(false);

    ui->ds_Button->setEnabled(false);

    ui->dy_Button->setEnabled(false);

    ui->cf_Button->setEnabled(false);

    ui->cu_Button->setEnabled(false);

    ui->ag_Button->setEnabled(false);

    ui->au_Button->setEnabled(false);

    ui->rg_Button->setEnabled(false);

    ui->ho_Button->setEnabled(false);

    ui->es_Button->setEnabled(false);

    ui->zn_Button->setEnabled(false);

    ui->cd_Button->setEnabled(false);

    ui->hg_Button->setEnabled(false);

    ui->cn_Button->setEnabled(false);

    ui->er_Button->setEnabled(false);

    ui->fm_Button->setEnabled(false);

    ui->b_Button->setEnabled(false);

    ui->al_Button->setEnabled(false);

    ui->ga_Button->setEnabled(false);

    ui->ln_Button->setEnabled(false);

    ui->tl_Button->setEnabled(false);

    ui->uut_Button->setEnabled(false);

    ui->tm_Button->setEnabled(false);

    ui->md_Button->setEnabled(false);

    ui->c_Button->setEnabled(false);

    ui->si_Button->setEnabled(false);

    ui->ge_Button->setEnabled(false);

    ui->sn_Button->setEnabled(false);

    ui->pd_Button->setEnabled(false);

    ui->fl_Button->setEnabled(false);

    ui->yb_Button->setEnabled(false);

    ui->no_Button->setEnabled(false);

    ui->n_Button->setEnabled(false);

    ui->p_Button->setEnabled(false);

    ui->as_Button->setEnabled(false);

    ui->sb_Button->setEnabled(false);

    ui->bi_Button->setEnabled(false);

    ui->uup_Button->setEnabled(false);

    ui->lu_Button->setEnabled(false);

    ui->lr_Button->setEnabled(false);

    ui->o_Button->setEnabled(false);

    ui->s_Button->setEnabled(false);

    ui->se_Button->setEnabled(false);

    ui->te_Button->setEnabled(false);

    ui->po_Button->setEnabled(false);

    ui->lv_Button->setEnabled(false);

    ui->f_Button->setEnabled(false);

    ui->cl_Button->setEnabled(false);

    ui->br_Button->setEnabled(false);

    ui->l_Button->setEnabled(false);

    ui->at_Button->setEnabled(false);

    ui->uus_Button->setEnabled(false);

    ui->he_Button->setEnabled(false);

    ui->ne_Button->setEnabled(false);

    ui->ar_Button->setEnabled(false);

    ui->kr_Button->setEnabled(false);

    ui->xe_Button->setEnabled(false);

    ui->rn_Button->setEnabled(false);

    ui->uuo_Button->setEnabled(false);

    ui->lan_Button->setEnabled(false);

    ui->act_Button->setEnabled(false);
}

void MainWindow::on_ae_Button_released()
{
    ui->h_Button->setEnabled(true);

    ui->li_Button->setEnabled(true);

    ui->na_Button->setEnabled(true);

    ui->k_Button->setEnabled(true);

    ui->rb_Button->setEnabled(true);

    ui->cs_Button->setEnabled(true);

    ui->fr_Button->setEnabled(true);

    ui->la_Button->setEnabled(true);

    ui->ac_Button->setEnabled(true);

    ui->be_Button->setEnabled(true);

    ui->mg_Button->setEnabled(true);

    ui->ca_Button->setEnabled(true);

    ui->sr_Button->setEnabled(true);

    ui->ba_Button->setEnabled(true);

    ui->ra_Button->setEnabled(true);

    ui->ce_Button->setEnabled(true);

    ui->th_Button->setEnabled(true);

    ui->sc_Button->setEnabled(true);

    ui->y_Button->setEnabled(true);

    ui->pr_Button->setEnabled(true);

    ui->pa_Button->setEnabled(true);

    ui->ti_Button->setEnabled(true);

    ui->zr_Button->setEnabled(true);

    ui->hf_Button->setEnabled(true);

    ui->rf_Button->setEnabled(true);

    ui->nd_Button->setEnabled(true);

    ui->u_Button->setEnabled(true);

    ui->v_Button->setEnabled(true);

    ui->nb_Button->setEnabled(true);

    ui->ta_Button->setEnabled(true);

    ui->db_Button->setEnabled(true);

    ui->pm_Button->setEnabled(true);

    ui->np_Button->setEnabled(true);

    ui->cr_Button->setEnabled(true);

    ui->mo_Button->setEnabled(true);

    ui->w_Button->setEnabled(true);

    ui->sg_Button->setEnabled(true);

    ui->sm_Button->setEnabled(true);

    ui->pu_Button->setEnabled(true);

    ui->mn_Button->setEnabled(true);

    ui->tc_Button->setEnabled(true);

    ui->re_Button->setEnabled(true);

    ui->bh_Button->setEnabled(true);

    ui->eu_Button->setEnabled(true);

    ui->am_Button->setEnabled(true);

    ui->fe_Button->setEnabled(true);

    ui->ru_Button->setEnabled(true);

    ui->os_Button->setEnabled(true);

    ui->hs_Button->setEnabled(true);

    ui->gd_Button->setEnabled(true);

    ui->cm_Button->setEnabled(true);

    ui->co_Button->setEnabled(true);

    ui->rh_Button->setEnabled(true);

    ui->ir_Button->setEnabled(true);

    ui->mt_Button->setEnabled(true);

    ui->tb_Button->setEnabled(true);

    ui->bk_Button->setEnabled(true);

    ui->ni_Button->setEnabled(true);

    ui->pd_Button_2->setEnabled(true);

    ui->pt_Button->setEnabled(true);

    ui->ds_Button->setEnabled(true);

    ui->dy_Button->setEnabled(true);

    ui->cf_Button->setEnabled(true);

    ui->cu_Button->setEnabled(true);

    ui->ag_Button->setEnabled(true);

    ui->au_Button->setEnabled(true);

    ui->rg_Button->setEnabled(true);

    ui->ho_Button->setEnabled(true);

    ui->es_Button->setEnabled(true);

    ui->zn_Button->setEnabled(true);

    ui->cd_Button->setEnabled(true);

    ui->hg_Button->setEnabled(true);

    ui->cn_Button->setEnabled(true);

    ui->er_Button->setEnabled(true);

    ui->fm_Button->setEnabled(true);

    ui->b_Button->setEnabled(true);

    ui->al_Button->setEnabled(true);

    ui->ga_Button->setEnabled(true);

    ui->ln_Button->setEnabled(true);

    ui->tl_Button->setEnabled(true);

    ui->uut_Button->setEnabled(true);

    ui->tm_Button->setEnabled(true);

    ui->md_Button->setEnabled(true);

    ui->c_Button->setEnabled(true);

    ui->si_Button->setEnabled(true);

    ui->ge_Button->setEnabled(true);

    ui->sn_Button->setEnabled(true);

    ui->pd_Button->setEnabled(true);

    ui->fl_Button->setEnabled(true);

    ui->yb_Button->setEnabled(true);

    ui->no_Button->setEnabled(true);

    ui->n_Button->setEnabled(true);

    ui->p_Button->setEnabled(true);

    ui->as_Button->setEnabled(true);

    ui->sb_Button->setEnabled(true);

    ui->bi_Button->setEnabled(true);

    ui->uup_Button->setEnabled(true);

    ui->lu_Button->setEnabled(true);

    ui->lr_Button->setEnabled(true);

    ui->o_Button->setEnabled(true);

    ui->s_Button->setEnabled(true);

    ui->se_Button->setEnabled(true);

    ui->te_Button->setEnabled(true);

    ui->po_Button->setEnabled(true);

    ui->lv_Button->setEnabled(true);

    ui->f_Button->setEnabled(true);

    ui->cl_Button->setEnabled(true);

    ui->br_Button->setEnabled(true);

    ui->l_Button->setEnabled(true);

    ui->at_Button->setEnabled(true);

    ui->uus_Button->setEnabled(true);

    ui->he_Button->setEnabled(true);

    ui->ne_Button->setEnabled(true);

    ui->ar_Button->setEnabled(true);

    ui->kr_Button->setEnabled(true);

    ui->xe_Button->setEnabled(true);

    ui->rn_Button->setEnabled(true);

    ui->uuo_Button->setEnabled(true);

    ui->lan_Button->setEnabled(true);

    ui->act_Button->setEnabled(true);
}

void MainWindow::on_tm_Button_2_pressed()
{
    ui->h_Button->setEnabled(false);

    ui->li_Button->setEnabled(false);

    ui->na_Button->setEnabled(false);

    ui->k_Button->setEnabled(false);

    ui->rb_Button->setEnabled(false);

    ui->cs_Button->setEnabled(false);

    ui->fr_Button->setEnabled(false);

    ui->la_Button->setEnabled(false);

    ui->ac_Button->setEnabled(false);

    ui->be_Button->setEnabled(false);

    ui->mg_Button->setEnabled(false);

    ui->ca_Button->setEnabled(false);

    ui->sr_Button->setEnabled(false);

    ui->ba_Button->setEnabled(false);

    ui->ra_Button->setEnabled(false);

    ui->ce_Button->setEnabled(false);

    ui->th_Button->setEnabled(false);

    ui->sc_Button->setEnabled(true);

    ui->y_Button->setEnabled(true);

    ui->pr_Button->setEnabled(false);

    ui->pa_Button->setEnabled(false);

    ui->ti_Button->setEnabled(true);

    ui->zr_Button->setEnabled(true);

    ui->hf_Button->setEnabled(true);

    ui->rf_Button->setEnabled(true);

    ui->nd_Button->setEnabled(false);

    ui->u_Button->setEnabled(false);

    ui->v_Button->setEnabled(true);

    ui->nb_Button->setEnabled(true);

    ui->ta_Button->setEnabled(true);

    ui->db_Button->setEnabled(true);

    ui->pm_Button->setEnabled(false);

    ui->np_Button->setEnabled(false);

    ui->cr_Button->setEnabled(true);

    ui->mo_Button->setEnabled(true);

    ui->w_Button->setEnabled(true);

    ui->sg_Button->setEnabled(true);

    ui->sm_Button->setEnabled(false);

    ui->pu_Button->setEnabled(false);

    ui->mn_Button->setEnabled(true);

    ui->tc_Button->setEnabled(true);

    ui->re_Button->setEnabled(true);

    ui->bh_Button->setEnabled(true);

    ui->eu_Button->setEnabled(false);

    ui->am_Button->setEnabled(false);

    ui->fe_Button->setEnabled(true);

    ui->ru_Button->setEnabled(true);

    ui->os_Button->setEnabled(true);

    ui->hs_Button->setEnabled(true);

    ui->gd_Button->setEnabled(false);

    ui->cm_Button->setEnabled(false);

    ui->co_Button->setEnabled(true);

    ui->rh_Button->setEnabled(true);

    ui->ir_Button->setEnabled(true);

    ui->mt_Button->setEnabled(true);

    ui->tb_Button->setEnabled(false);

    ui->bk_Button->setEnabled(false);

    ui->ni_Button->setEnabled(true);

    ui->pd_Button_2->setEnabled(true);

    ui->pt_Button->setEnabled(true);

    ui->ds_Button->setEnabled(true);

    ui->dy_Button->setEnabled(false);

    ui->cf_Button->setEnabled(false);

    ui->cu_Button->setEnabled(true);

    ui->ag_Button->setEnabled(true);

    ui->au_Button->setEnabled(true);

    ui->rg_Button->setEnabled(true);

    ui->ho_Button->setEnabled(false);

    ui->es_Button->setEnabled(false);

    ui->zn_Button->setEnabled(true);

    ui->cd_Button->setEnabled(true);

    ui->hg_Button->setEnabled(true);

    ui->cn_Button->setEnabled(true);

    ui->er_Button->setEnabled(false);

    ui->fm_Button->setEnabled(false);

    ui->b_Button->setEnabled(false);

    ui->al_Button->setEnabled(false);

    ui->ga_Button->setEnabled(false);

    ui->ln_Button->setEnabled(false);

    ui->tl_Button->setEnabled(false);

    ui->uut_Button->setEnabled(false);

    ui->tm_Button->setEnabled(false);

    ui->md_Button->setEnabled(false);

    ui->c_Button->setEnabled(false);

    ui->si_Button->setEnabled(false);

    ui->ge_Button->setEnabled(false);

    ui->sn_Button->setEnabled(false);

    ui->pd_Button->setEnabled(false);

    ui->fl_Button->setEnabled(false);

    ui->yb_Button->setEnabled(false);

    ui->no_Button->setEnabled(false);

    ui->n_Button->setEnabled(false);

    ui->p_Button->setEnabled(false);

    ui->as_Button->setEnabled(false);

    ui->sb_Button->setEnabled(false);

    ui->bi_Button->setEnabled(false);

    ui->uup_Button->setEnabled(false);

    ui->lu_Button->setEnabled(false);

    ui->lr_Button->setEnabled(false);

    ui->o_Button->setEnabled(false);

    ui->s_Button->setEnabled(false);

    ui->se_Button->setEnabled(false);

    ui->te_Button->setEnabled(false);

    ui->po_Button->setEnabled(false);

    ui->lv_Button->setEnabled(false);

    ui->f_Button->setEnabled(false);

    ui->cl_Button->setEnabled(false);

    ui->br_Button->setEnabled(false);

    ui->l_Button->setEnabled(false);

    ui->at_Button->setEnabled(false);

    ui->uus_Button->setEnabled(false);

    ui->he_Button->setEnabled(false);

    ui->ne_Button->setEnabled(false);

    ui->ar_Button->setEnabled(false);

    ui->kr_Button->setEnabled(false);

    ui->xe_Button->setEnabled(false);

    ui->rn_Button->setEnabled(false);

    ui->uuo_Button->setEnabled(false);

    ui->lan_Button->setEnabled(false);

    ui->act_Button->setEnabled(false);
}

void MainWindow::on_tm_Button_2_released()
{
    ui->h_Button->setEnabled(true);

    ui->li_Button->setEnabled(true);

    ui->na_Button->setEnabled(true);

    ui->k_Button->setEnabled(true);

    ui->rb_Button->setEnabled(true);

    ui->cs_Button->setEnabled(true);

    ui->fr_Button->setEnabled(true);

    ui->la_Button->setEnabled(true);

    ui->ac_Button->setEnabled(true);

    ui->be_Button->setEnabled(true);

    ui->mg_Button->setEnabled(true);

    ui->ca_Button->setEnabled(true);

    ui->sr_Button->setEnabled(true);

    ui->ba_Button->setEnabled(true);

    ui->ra_Button->setEnabled(true);

    ui->ce_Button->setEnabled(true);

    ui->th_Button->setEnabled(true);

    ui->sc_Button->setEnabled(true);

    ui->y_Button->setEnabled(true);

    ui->pr_Button->setEnabled(true);

    ui->pa_Button->setEnabled(true);

    ui->ti_Button->setEnabled(true);

    ui->zr_Button->setEnabled(true);

    ui->hf_Button->setEnabled(true);

    ui->rf_Button->setEnabled(true);

    ui->nd_Button->setEnabled(true);

    ui->u_Button->setEnabled(true);

    ui->v_Button->setEnabled(true);

    ui->nb_Button->setEnabled(true);

    ui->ta_Button->setEnabled(true);

    ui->db_Button->setEnabled(true);

    ui->pm_Button->setEnabled(true);

    ui->np_Button->setEnabled(true);

    ui->cr_Button->setEnabled(true);

    ui->mo_Button->setEnabled(true);

    ui->w_Button->setEnabled(true);

    ui->sg_Button->setEnabled(true);

    ui->sm_Button->setEnabled(true);

    ui->pu_Button->setEnabled(true);

    ui->mn_Button->setEnabled(true);

    ui->tc_Button->setEnabled(true);

    ui->re_Button->setEnabled(true);

    ui->bh_Button->setEnabled(true);

    ui->eu_Button->setEnabled(true);

    ui->am_Button->setEnabled(true);

    ui->fe_Button->setEnabled(true);

    ui->ru_Button->setEnabled(true);

    ui->os_Button->setEnabled(true);

    ui->hs_Button->setEnabled(true);

    ui->gd_Button->setEnabled(true);

    ui->cm_Button->setEnabled(true);

    ui->co_Button->setEnabled(true);

    ui->rh_Button->setEnabled(true);

    ui->ir_Button->setEnabled(true);

    ui->mt_Button->setEnabled(true);

    ui->tb_Button->setEnabled(true);

    ui->bk_Button->setEnabled(true);

    ui->ni_Button->setEnabled(true);

    ui->pd_Button_2->setEnabled(true);

    ui->pt_Button->setEnabled(true);

    ui->ds_Button->setEnabled(true);

    ui->dy_Button->setEnabled(true);

    ui->cf_Button->setEnabled(true);

    ui->cu_Button->setEnabled(true);

    ui->ag_Button->setEnabled(true);

    ui->au_Button->setEnabled(true);

    ui->rg_Button->setEnabled(true);

    ui->ho_Button->setEnabled(true);

    ui->es_Button->setEnabled(true);

    ui->zn_Button->setEnabled(true);

    ui->cd_Button->setEnabled(true);

    ui->hg_Button->setEnabled(true);

    ui->cn_Button->setEnabled(true);

    ui->er_Button->setEnabled(true);

    ui->fm_Button->setEnabled(true);

    ui->b_Button->setEnabled(true);

    ui->al_Button->setEnabled(true);

    ui->ga_Button->setEnabled(true);

    ui->ln_Button->setEnabled(true);

    ui->tl_Button->setEnabled(true);

    ui->uut_Button->setEnabled(true);

    ui->tm_Button->setEnabled(true);

    ui->md_Button->setEnabled(true);

    ui->c_Button->setEnabled(true);

    ui->si_Button->setEnabled(true);

    ui->ge_Button->setEnabled(true);

    ui->sn_Button->setEnabled(true);

    ui->pd_Button->setEnabled(true);

    ui->fl_Button->setEnabled(true);

    ui->yb_Button->setEnabled(true);

    ui->no_Button->setEnabled(true);

    ui->n_Button->setEnabled(true);

    ui->p_Button->setEnabled(true);

    ui->as_Button->setEnabled(true);

    ui->sb_Button->setEnabled(true);

    ui->bi_Button->setEnabled(true);

    ui->uup_Button->setEnabled(true);

    ui->lu_Button->setEnabled(true);

    ui->lr_Button->setEnabled(true);

    ui->o_Button->setEnabled(true);

    ui->s_Button->setEnabled(true);

    ui->se_Button->setEnabled(true);

    ui->te_Button->setEnabled(true);

    ui->po_Button->setEnabled(true);

    ui->lv_Button->setEnabled(true);

    ui->f_Button->setEnabled(true);

    ui->cl_Button->setEnabled(true);

    ui->br_Button->setEnabled(true);

    ui->l_Button->setEnabled(true);

    ui->at_Button->setEnabled(true);

    ui->uus_Button->setEnabled(true);

    ui->he_Button->setEnabled(true);

    ui->ne_Button->setEnabled(true);

    ui->ar_Button->setEnabled(true);

    ui->kr_Button->setEnabled(true);

    ui->xe_Button->setEnabled(true);

    ui->rn_Button->setEnabled(true);

    ui->uuo_Button->setEnabled(true);

    ui->lan_Button->setEnabled(true);

    ui->act_Button->setEnabled(true);
}

void MainWindow::on_bm_Button_pressed()
{
    ui->h_Button->setEnabled(false);

    ui->li_Button->setEnabled(false);

    ui->na_Button->setEnabled(false);

    ui->k_Button->setEnabled(false);

    ui->rb_Button->setEnabled(false);

    ui->cs_Button->setEnabled(false);

    ui->fr_Button->setEnabled(false);

    ui->la_Button->setEnabled(false);

    ui->ac_Button->setEnabled(false);

    ui->be_Button->setEnabled(false);

    ui->mg_Button->setEnabled(false);

    ui->ca_Button->setEnabled(false);

    ui->sr_Button->setEnabled(false);

    ui->ba_Button->setEnabled(false);

    ui->ra_Button->setEnabled(false);

    ui->ce_Button->setEnabled(false);

    ui->th_Button->setEnabled(false);

    ui->sc_Button->setEnabled(false);

    ui->y_Button->setEnabled(false);

    ui->pr_Button->setEnabled(false);

    ui->pa_Button->setEnabled(false);

    ui->ti_Button->setEnabled(false);

    ui->zr_Button->setEnabled(false);

    ui->hf_Button->setEnabled(false);

    ui->rf_Button->setEnabled(false);

    ui->nd_Button->setEnabled(false);

    ui->u_Button->setEnabled(false);

    ui->v_Button->setEnabled(false);

    ui->nb_Button->setEnabled(false);

    ui->ta_Button->setEnabled(false);

    ui->db_Button->setEnabled(false);

    ui->pm_Button->setEnabled(false);

    ui->np_Button->setEnabled(false);

    ui->cr_Button->setEnabled(false);

    ui->mo_Button->setEnabled(false);

    ui->w_Button->setEnabled(false);

    ui->sg_Button->setEnabled(false);

    ui->sm_Button->setEnabled(false);

    ui->pu_Button->setEnabled(false);

    ui->mn_Button->setEnabled(false);

    ui->tc_Button->setEnabled(false);

    ui->re_Button->setEnabled(false);

    ui->bh_Button->setEnabled(false);

    ui->eu_Button->setEnabled(false);

    ui->am_Button->setEnabled(false);

    ui->fe_Button->setEnabled(false);

    ui->ru_Button->setEnabled(false);

    ui->os_Button->setEnabled(false);

    ui->hs_Button->setEnabled(false);

    ui->gd_Button->setEnabled(false);

    ui->cm_Button->setEnabled(false);

    ui->co_Button->setEnabled(false);

    ui->rh_Button->setEnabled(false);

    ui->ir_Button->setEnabled(false);

    ui->mt_Button->setEnabled(false);

    ui->tb_Button->setEnabled(false);

    ui->bk_Button->setEnabled(false);

    ui->ni_Button->setEnabled(false);

    ui->pd_Button_2->setEnabled(false);

    ui->pt_Button->setEnabled(false);

    ui->ds_Button->setEnabled(false);

    ui->dy_Button->setEnabled(false);

    ui->cf_Button->setEnabled(false);

    ui->cu_Button->setEnabled(false);

    ui->ag_Button->setEnabled(false);

    ui->au_Button->setEnabled(false);

    ui->rg_Button->setEnabled(false);

    ui->ho_Button->setEnabled(false);

    ui->es_Button->setEnabled(false);

    ui->zn_Button->setEnabled(false);

    ui->cd_Button->setEnabled(false);

    ui->hg_Button->setEnabled(false);

    ui->cn_Button->setEnabled(false);

    ui->er_Button->setEnabled(false);

    ui->fm_Button->setEnabled(false);

    ui->b_Button->setEnabled(false);

    ui->al_Button->setEnabled(true);

    ui->ga_Button->setEnabled(true);

    ui->ln_Button->setEnabled(true);

    ui->tl_Button->setEnabled(true);

    ui->uut_Button->setEnabled(true);

    ui->tm_Button->setEnabled(false);

    ui->md_Button->setEnabled(false);

    ui->c_Button->setEnabled(false);

    ui->si_Button->setEnabled(false);

    ui->ge_Button->setEnabled(false);

    ui->sn_Button->setEnabled(true);

    ui->pd_Button->setEnabled(true);

    ui->fl_Button->setEnabled(true);

    ui->yb_Button->setEnabled(false);

    ui->no_Button->setEnabled(false);

    ui->n_Button->setEnabled(false);

    ui->p_Button->setEnabled(false);

    ui->as_Button->setEnabled(false);

    ui->sb_Button->setEnabled(false);

    ui->bi_Button->setEnabled(true);

    ui->uup_Button->setEnabled(true);

    ui->lu_Button->setEnabled(false);

    ui->lr_Button->setEnabled(false);

    ui->o_Button->setEnabled(false);

    ui->s_Button->setEnabled(false);

    ui->se_Button->setEnabled(false);

    ui->te_Button->setEnabled(false);

    ui->po_Button->setEnabled(false);

    ui->lv_Button->setEnabled(true);

    ui->f_Button->setEnabled(false);

    ui->cl_Button->setEnabled(false);

    ui->br_Button->setEnabled(false);

    ui->l_Button->setEnabled(false);

    ui->at_Button->setEnabled(false);

    ui->uus_Button->setEnabled(false);

    ui->he_Button->setEnabled(false);

    ui->ne_Button->setEnabled(false);

    ui->ar_Button->setEnabled(false);

    ui->kr_Button->setEnabled(false);

    ui->xe_Button->setEnabled(false);

    ui->rn_Button->setEnabled(false);

    ui->uuo_Button->setEnabled(false);

    ui->lan_Button->setEnabled(false);

    ui->act_Button->setEnabled(false);
}

void MainWindow::on_bm_Button_released()
{
    ui->h_Button->setEnabled(true);

    ui->li_Button->setEnabled(true);

    ui->na_Button->setEnabled(true);

    ui->k_Button->setEnabled(true);

    ui->rb_Button->setEnabled(true);

    ui->cs_Button->setEnabled(true);

    ui->fr_Button->setEnabled(true);

    ui->la_Button->setEnabled(true);

    ui->ac_Button->setEnabled(true);

    ui->be_Button->setEnabled(true);

    ui->mg_Button->setEnabled(true);

    ui->ca_Button->setEnabled(true);

    ui->sr_Button->setEnabled(true);

    ui->ba_Button->setEnabled(true);

    ui->ra_Button->setEnabled(true);

    ui->ce_Button->setEnabled(true);

    ui->th_Button->setEnabled(true);

    ui->sc_Button->setEnabled(true);

    ui->y_Button->setEnabled(true);

    ui->pr_Button->setEnabled(true);

    ui->pa_Button->setEnabled(true);

    ui->ti_Button->setEnabled(true);

    ui->zr_Button->setEnabled(true);

    ui->hf_Button->setEnabled(true);

    ui->rf_Button->setEnabled(true);

    ui->nd_Button->setEnabled(true);

    ui->u_Button->setEnabled(true);

    ui->v_Button->setEnabled(true);

    ui->nb_Button->setEnabled(true);

    ui->ta_Button->setEnabled(true);

    ui->db_Button->setEnabled(true);

    ui->pm_Button->setEnabled(true);

    ui->np_Button->setEnabled(true);

    ui->cr_Button->setEnabled(true);

    ui->mo_Button->setEnabled(true);

    ui->w_Button->setEnabled(true);

    ui->sg_Button->setEnabled(true);

    ui->sm_Button->setEnabled(true);

    ui->pu_Button->setEnabled(true);

    ui->mn_Button->setEnabled(true);

    ui->tc_Button->setEnabled(true);

    ui->re_Button->setEnabled(true);

    ui->bh_Button->setEnabled(true);

    ui->eu_Button->setEnabled(true);

    ui->am_Button->setEnabled(true);

    ui->fe_Button->setEnabled(true);

    ui->ru_Button->setEnabled(true);

    ui->os_Button->setEnabled(true);

    ui->hs_Button->setEnabled(true);

    ui->gd_Button->setEnabled(true);

    ui->cm_Button->setEnabled(true);

    ui->co_Button->setEnabled(true);

    ui->rh_Button->setEnabled(true);

    ui->ir_Button->setEnabled(true);

    ui->mt_Button->setEnabled(true);

    ui->tb_Button->setEnabled(true);

    ui->bk_Button->setEnabled(true);

    ui->ni_Button->setEnabled(true);

    ui->pd_Button_2->setEnabled(true);

    ui->pt_Button->setEnabled(true);

    ui->ds_Button->setEnabled(true);

    ui->dy_Button->setEnabled(true);

    ui->cf_Button->setEnabled(true);

    ui->cu_Button->setEnabled(true);

    ui->ag_Button->setEnabled(true);

    ui->au_Button->setEnabled(true);

    ui->rg_Button->setEnabled(true);

    ui->ho_Button->setEnabled(true);

    ui->es_Button->setEnabled(true);

    ui->zn_Button->setEnabled(true);

    ui->cd_Button->setEnabled(true);

    ui->hg_Button->setEnabled(true);

    ui->cn_Button->setEnabled(true);

    ui->er_Button->setEnabled(true);

    ui->fm_Button->setEnabled(true);

    ui->b_Button->setEnabled(true);

    ui->al_Button->setEnabled(true);

    ui->ga_Button->setEnabled(true);

    ui->ln_Button->setEnabled(true);

    ui->tl_Button->setEnabled(true);

    ui->uut_Button->setEnabled(true);

    ui->tm_Button->setEnabled(true);

    ui->md_Button->setEnabled(true);

    ui->c_Button->setEnabled(true);

    ui->si_Button->setEnabled(true);

    ui->ge_Button->setEnabled(true);

    ui->sn_Button->setEnabled(true);

    ui->pd_Button->setEnabled(true);

    ui->fl_Button->setEnabled(true);

    ui->yb_Button->setEnabled(true);

    ui->no_Button->setEnabled(true);

    ui->n_Button->setEnabled(true);

    ui->p_Button->setEnabled(true);

    ui->as_Button->setEnabled(true);

    ui->sb_Button->setEnabled(true);

    ui->bi_Button->setEnabled(true);

    ui->uup_Button->setEnabled(true);

    ui->lu_Button->setEnabled(true);

    ui->lr_Button->setEnabled(true);

    ui->o_Button->setEnabled(true);

    ui->s_Button->setEnabled(true);

    ui->se_Button->setEnabled(true);

    ui->te_Button->setEnabled(true);

    ui->po_Button->setEnabled(true);

    ui->lv_Button->setEnabled(true);

    ui->f_Button->setEnabled(true);

    ui->cl_Button->setEnabled(true);

    ui->br_Button->setEnabled(true);

    ui->l_Button->setEnabled(true);

    ui->at_Button->setEnabled(true);

    ui->uus_Button->setEnabled(true);

    ui->he_Button->setEnabled(true);

    ui->ne_Button->setEnabled(true);

    ui->ar_Button->setEnabled(true);

    ui->kr_Button->setEnabled(true);

    ui->xe_Button->setEnabled(true);

    ui->rn_Button->setEnabled(true);

    ui->uuo_Button->setEnabled(true);

    ui->lan_Button->setEnabled(true);

    ui->act_Button->setEnabled(true);
}

void MainWindow::on_semi_Button_pressed()
{
    ui->h_Button->setEnabled(false);

    ui->li_Button->setEnabled(false);

    ui->na_Button->setEnabled(false);

    ui->k_Button->setEnabled(false);

    ui->rb_Button->setEnabled(false);

    ui->cs_Button->setEnabled(false);

    ui->fr_Button->setEnabled(false);

    ui->la_Button->setEnabled(false);

    ui->ac_Button->setEnabled(false);

    ui->be_Button->setEnabled(false);

    ui->mg_Button->setEnabled(false);

    ui->ca_Button->setEnabled(false);

    ui->sr_Button->setEnabled(false);

    ui->ba_Button->setEnabled(false);

    ui->ra_Button->setEnabled(false);

    ui->ce_Button->setEnabled(false);

    ui->th_Button->setEnabled(false);

    ui->sc_Button->setEnabled(false);

    ui->y_Button->setEnabled(false);

    ui->pr_Button->setEnabled(false);

    ui->pa_Button->setEnabled(false);

    ui->ti_Button->setEnabled(false);

    ui->zr_Button->setEnabled(false);

    ui->hf_Button->setEnabled(false);

    ui->rf_Button->setEnabled(false);

    ui->nd_Button->setEnabled(false);

    ui->u_Button->setEnabled(false);

    ui->v_Button->setEnabled(false);

    ui->nb_Button->setEnabled(false);

    ui->ta_Button->setEnabled(false);

    ui->db_Button->setEnabled(false);

    ui->pm_Button->setEnabled(false);

    ui->np_Button->setEnabled(false);

    ui->cr_Button->setEnabled(false);

    ui->mo_Button->setEnabled(false);

    ui->w_Button->setEnabled(false);

    ui->sg_Button->setEnabled(false);

    ui->sm_Button->setEnabled(false);

    ui->pu_Button->setEnabled(false);

    ui->mn_Button->setEnabled(false);

    ui->tc_Button->setEnabled(false);

    ui->re_Button->setEnabled(false);

    ui->bh_Button->setEnabled(false);

    ui->eu_Button->setEnabled(false);

    ui->am_Button->setEnabled(false);

    ui->fe_Button->setEnabled(false);

    ui->ru_Button->setEnabled(false);

    ui->os_Button->setEnabled(false);

    ui->hs_Button->setEnabled(false);

    ui->gd_Button->setEnabled(false);

    ui->cm_Button->setEnabled(false);

    ui->co_Button->setEnabled(false);

    ui->rh_Button->setEnabled(false);

    ui->ir_Button->setEnabled(false);

    ui->mt_Button->setEnabled(false);

    ui->tb_Button->setEnabled(false);

    ui->bk_Button->setEnabled(false);

    ui->ni_Button->setEnabled(false);

    ui->pd_Button_2->setEnabled(false);

    ui->pt_Button->setEnabled(false);

    ui->ds_Button->setEnabled(false);

    ui->dy_Button->setEnabled(false);

    ui->cf_Button->setEnabled(false);

    ui->cu_Button->setEnabled(false);

    ui->ag_Button->setEnabled(false);

    ui->au_Button->setEnabled(false);

    ui->rg_Button->setEnabled(false);

    ui->ho_Button->setEnabled(false);

    ui->es_Button->setEnabled(false);

    ui->zn_Button->setEnabled(false);

    ui->cd_Button->setEnabled(false);

    ui->hg_Button->setEnabled(false);

    ui->cn_Button->setEnabled(false);

    ui->er_Button->setEnabled(false);

    ui->fm_Button->setEnabled(false);

    ui->b_Button->setEnabled(true);

    ui->al_Button->setEnabled(false);

    ui->ga_Button->setEnabled(false);

    ui->ln_Button->setEnabled(false);

    ui->tl_Button->setEnabled(false);

    ui->uut_Button->setEnabled(false);

    ui->tm_Button->setEnabled(false);

    ui->md_Button->setEnabled(false);

    ui->c_Button->setEnabled(false);

    ui->si_Button->setEnabled(true);

    ui->ge_Button->setEnabled(true);

    ui->sn_Button->setEnabled(false);

    ui->pd_Button->setEnabled(false);

    ui->fl_Button->setEnabled(false);

    ui->yb_Button->setEnabled(false);

    ui->no_Button->setEnabled(false);

    ui->n_Button->setEnabled(false);

    ui->p_Button->setEnabled(false);

    ui->as_Button->setEnabled(true);

    ui->sb_Button->setEnabled(true);

    ui->bi_Button->setEnabled(false);

    ui->uup_Button->setEnabled(false);

    ui->lu_Button->setEnabled(false);

    ui->lr_Button->setEnabled(false);

    ui->o_Button->setEnabled(false);

    ui->s_Button->setEnabled(false);

    ui->se_Button->setEnabled(false);

    ui->te_Button->setEnabled(true);

    ui->po_Button->setEnabled(true);

    ui->lv_Button->setEnabled(false);

    ui->f_Button->setEnabled(false);

    ui->cl_Button->setEnabled(false);

    ui->br_Button->setEnabled(false);

    ui->l_Button->setEnabled(false);

    ui->at_Button->setEnabled(false);

    ui->uus_Button->setEnabled(false);

    ui->he_Button->setEnabled(false);

    ui->ne_Button->setEnabled(false);

    ui->ar_Button->setEnabled(false);

    ui->kr_Button->setEnabled(false);

    ui->xe_Button->setEnabled(false);

    ui->rn_Button->setEnabled(false);

    ui->uuo_Button->setEnabled(false);

    ui->lan_Button->setEnabled(false);

    ui->act_Button->setEnabled(false);
}

void MainWindow::on_semi_Button_released()
{
    ui->h_Button->setEnabled(true);

    ui->li_Button->setEnabled(true);

    ui->na_Button->setEnabled(true);

    ui->k_Button->setEnabled(true);

    ui->rb_Button->setEnabled(true);

    ui->cs_Button->setEnabled(true);

    ui->fr_Button->setEnabled(true);

    ui->la_Button->setEnabled(true);

    ui->ac_Button->setEnabled(true);

    ui->be_Button->setEnabled(true);

    ui->mg_Button->setEnabled(true);

    ui->ca_Button->setEnabled(true);

    ui->sr_Button->setEnabled(true);

    ui->ba_Button->setEnabled(true);

    ui->ra_Button->setEnabled(true);

    ui->ce_Button->setEnabled(true);

    ui->th_Button->setEnabled(true);

    ui->sc_Button->setEnabled(true);

    ui->y_Button->setEnabled(true);

    ui->pr_Button->setEnabled(true);

    ui->pa_Button->setEnabled(true);

    ui->ti_Button->setEnabled(true);

    ui->zr_Button->setEnabled(true);

    ui->hf_Button->setEnabled(true);

    ui->rf_Button->setEnabled(true);

    ui->nd_Button->setEnabled(true);

    ui->u_Button->setEnabled(true);

    ui->v_Button->setEnabled(true);

    ui->nb_Button->setEnabled(true);

    ui->ta_Button->setEnabled(true);

    ui->db_Button->setEnabled(true);

    ui->pm_Button->setEnabled(true);

    ui->np_Button->setEnabled(true);

    ui->cr_Button->setEnabled(true);

    ui->mo_Button->setEnabled(true);

    ui->w_Button->setEnabled(true);

    ui->sg_Button->setEnabled(true);

    ui->sm_Button->setEnabled(true);

    ui->pu_Button->setEnabled(true);

    ui->mn_Button->setEnabled(true);

    ui->tc_Button->setEnabled(true);

    ui->re_Button->setEnabled(true);

    ui->bh_Button->setEnabled(true);

    ui->eu_Button->setEnabled(true);

    ui->am_Button->setEnabled(true);

    ui->fe_Button->setEnabled(true);

    ui->ru_Button->setEnabled(true);

    ui->os_Button->setEnabled(true);

    ui->hs_Button->setEnabled(true);

    ui->gd_Button->setEnabled(true);

    ui->cm_Button->setEnabled(true);

    ui->co_Button->setEnabled(true);

    ui->rh_Button->setEnabled(true);

    ui->ir_Button->setEnabled(true);

    ui->mt_Button->setEnabled(true);

    ui->tb_Button->setEnabled(true);

    ui->bk_Button->setEnabled(true);

    ui->ni_Button->setEnabled(true);

    ui->pd_Button_2->setEnabled(true);

    ui->pt_Button->setEnabled(true);

    ui->ds_Button->setEnabled(true);

    ui->dy_Button->setEnabled(true);

    ui->cf_Button->setEnabled(true);

    ui->cu_Button->setEnabled(true);

    ui->ag_Button->setEnabled(true);

    ui->au_Button->setEnabled(true);

    ui->rg_Button->setEnabled(true);

    ui->ho_Button->setEnabled(true);

    ui->es_Button->setEnabled(true);

    ui->zn_Button->setEnabled(true);

    ui->cd_Button->setEnabled(true);

    ui->hg_Button->setEnabled(true);

    ui->cn_Button->setEnabled(true);

    ui->er_Button->setEnabled(true);

    ui->fm_Button->setEnabled(true);

    ui->b_Button->setEnabled(true);

    ui->al_Button->setEnabled(true);

    ui->ga_Button->setEnabled(true);

    ui->ln_Button->setEnabled(true);

    ui->tl_Button->setEnabled(true);

    ui->uut_Button->setEnabled(true);

    ui->tm_Button->setEnabled(true);

    ui->md_Button->setEnabled(true);

    ui->c_Button->setEnabled(true);

    ui->si_Button->setEnabled(true);

    ui->ge_Button->setEnabled(true);

    ui->sn_Button->setEnabled(true);

    ui->pd_Button->setEnabled(true);

    ui->fl_Button->setEnabled(true);

    ui->yb_Button->setEnabled(true);

    ui->no_Button->setEnabled(true);

    ui->n_Button->setEnabled(true);

    ui->p_Button->setEnabled(true);

    ui->as_Button->setEnabled(true);

    ui->sb_Button->setEnabled(true);

    ui->bi_Button->setEnabled(true);

    ui->uup_Button->setEnabled(true);

    ui->lu_Button->setEnabled(true);

    ui->lr_Button->setEnabled(true);

    ui->o_Button->setEnabled(true);

    ui->s_Button->setEnabled(true);

    ui->se_Button->setEnabled(true);

    ui->te_Button->setEnabled(true);

    ui->po_Button->setEnabled(true);

    ui->lv_Button->setEnabled(true);

    ui->f_Button->setEnabled(true);

    ui->cl_Button->setEnabled(true);

    ui->br_Button->setEnabled(true);

    ui->l_Button->setEnabled(true);

    ui->at_Button->setEnabled(true);

    ui->uus_Button->setEnabled(true);

    ui->he_Button->setEnabled(true);

    ui->ne_Button->setEnabled(true);

    ui->ar_Button->setEnabled(true);

    ui->kr_Button->setEnabled(true);

    ui->xe_Button->setEnabled(true);

    ui->rn_Button->setEnabled(true);

    ui->uuo_Button->setEnabled(true);

    ui->lan_Button->setEnabled(true);

    ui->act_Button->setEnabled(true);
}

void MainWindow::on_nonm_Button_pressed()
{
    ui->h_Button->setEnabled(true);

    ui->li_Button->setEnabled(false);

    ui->na_Button->setEnabled(false);

    ui->k_Button->setEnabled(false);

    ui->rb_Button->setEnabled(false);

    ui->cs_Button->setEnabled(false);

    ui->fr_Button->setEnabled(false);

    ui->la_Button->setEnabled(false);

    ui->ac_Button->setEnabled(false);

    ui->be_Button->setEnabled(false);

    ui->mg_Button->setEnabled(false);

    ui->ca_Button->setEnabled(false);

    ui->sr_Button->setEnabled(false);

    ui->ba_Button->setEnabled(false);

    ui->ra_Button->setEnabled(false);

    ui->ce_Button->setEnabled(false);

    ui->th_Button->setEnabled(false);

    ui->sc_Button->setEnabled(false);

    ui->y_Button->setEnabled(false);

    ui->pr_Button->setEnabled(false);

    ui->pa_Button->setEnabled(false);

    ui->ti_Button->setEnabled(false);

    ui->zr_Button->setEnabled(false);

    ui->hf_Button->setEnabled(false);

    ui->rf_Button->setEnabled(false);

    ui->nd_Button->setEnabled(false);

    ui->u_Button->setEnabled(false);

    ui->v_Button->setEnabled(false);

    ui->nb_Button->setEnabled(false);

    ui->ta_Button->setEnabled(false);

    ui->db_Button->setEnabled(false);

    ui->pm_Button->setEnabled(false);

    ui->np_Button->setEnabled(false);

    ui->cr_Button->setEnabled(false);

    ui->mo_Button->setEnabled(false);

    ui->w_Button->setEnabled(false);

    ui->sg_Button->setEnabled(false);

    ui->sm_Button->setEnabled(false);

    ui->pu_Button->setEnabled(false);

    ui->mn_Button->setEnabled(false);

    ui->tc_Button->setEnabled(false);

    ui->re_Button->setEnabled(false);

    ui->bh_Button->setEnabled(false);

    ui->eu_Button->setEnabled(false);

    ui->am_Button->setEnabled(false);

    ui->fe_Button->setEnabled(false);

    ui->ru_Button->setEnabled(false);

    ui->os_Button->setEnabled(false);

    ui->hs_Button->setEnabled(false);

    ui->gd_Button->setEnabled(false);

    ui->cm_Button->setEnabled(false);

    ui->co_Button->setEnabled(false);

    ui->rh_Button->setEnabled(false);

    ui->ir_Button->setEnabled(false);

    ui->mt_Button->setEnabled(false);

    ui->tb_Button->setEnabled(false);

    ui->bk_Button->setEnabled(false);

    ui->ni_Button->setEnabled(false);

    ui->pd_Button_2->setEnabled(false);

    ui->pt_Button->setEnabled(false);

    ui->ds_Button->setEnabled(false);

    ui->dy_Button->setEnabled(false);

    ui->cf_Button->setEnabled(false);

    ui->cu_Button->setEnabled(false);

    ui->ag_Button->setEnabled(false);

    ui->au_Button->setEnabled(false);

    ui->rg_Button->setEnabled(false);

    ui->ho_Button->setEnabled(false);

    ui->es_Button->setEnabled(false);

    ui->zn_Button->setEnabled(false);

    ui->cd_Button->setEnabled(false);

    ui->hg_Button->setEnabled(false);

    ui->cn_Button->setEnabled(false);

    ui->er_Button->setEnabled(false);

    ui->fm_Button->setEnabled(false);

    ui->b_Button->setEnabled(false);

    ui->al_Button->setEnabled(false);

    ui->ga_Button->setEnabled(false);

    ui->ln_Button->setEnabled(false);

    ui->tl_Button->setEnabled(false);

    ui->uut_Button->setEnabled(false);

    ui->tm_Button->setEnabled(false);

    ui->md_Button->setEnabled(false);

    ui->c_Button->setEnabled(true);

    ui->si_Button->setEnabled(false);

    ui->ge_Button->setEnabled(false);

    ui->sn_Button->setEnabled(false);

    ui->pd_Button->setEnabled(false);

    ui->fl_Button->setEnabled(false);

    ui->yb_Button->setEnabled(false);

    ui->no_Button->setEnabled(false);

    ui->n_Button->setEnabled(true);

    ui->p_Button->setEnabled(true);

    ui->as_Button->setEnabled(false);

    ui->sb_Button->setEnabled(false);

    ui->bi_Button->setEnabled(false);

    ui->uup_Button->setEnabled(false);

    ui->lu_Button->setEnabled(false);

    ui->lr_Button->setEnabled(false);

    ui->o_Button->setEnabled(true);

    ui->s_Button->setEnabled(true);

    ui->se_Button->setEnabled(true);

    ui->te_Button->setEnabled(false);

    ui->po_Button->setEnabled(false);

    ui->lv_Button->setEnabled(false);

    ui->f_Button->setEnabled(false);

    ui->cl_Button->setEnabled(false);

    ui->br_Button->setEnabled(false);

    ui->l_Button->setEnabled(false);

    ui->at_Button->setEnabled(false);

    ui->uus_Button->setEnabled(false);

    ui->he_Button->setEnabled(false);

    ui->ne_Button->setEnabled(false);

    ui->ar_Button->setEnabled(false);

    ui->kr_Button->setEnabled(false);

    ui->xe_Button->setEnabled(false);

    ui->rn_Button->setEnabled(false);

    ui->uuo_Button->setEnabled(false);

    ui->lan_Button->setEnabled(false);

    ui->act_Button->setEnabled(false);
}

void MainWindow::on_nonm_Button_released()
{
    ui->h_Button->setEnabled(true);

    ui->li_Button->setEnabled(true);

    ui->na_Button->setEnabled(true);

    ui->k_Button->setEnabled(true);

    ui->rb_Button->setEnabled(true);

    ui->cs_Button->setEnabled(true);

    ui->fr_Button->setEnabled(true);

    ui->la_Button->setEnabled(true);

    ui->ac_Button->setEnabled(true);

    ui->be_Button->setEnabled(true);

    ui->mg_Button->setEnabled(true);

    ui->ca_Button->setEnabled(true);

    ui->sr_Button->setEnabled(true);

    ui->ba_Button->setEnabled(true);

    ui->ra_Button->setEnabled(true);

    ui->ce_Button->setEnabled(true);

    ui->th_Button->setEnabled(true);

    ui->sc_Button->setEnabled(true);

    ui->y_Button->setEnabled(true);

    ui->pr_Button->setEnabled(true);

    ui->pa_Button->setEnabled(true);

    ui->ti_Button->setEnabled(true);

    ui->zr_Button->setEnabled(true);

    ui->hf_Button->setEnabled(true);

    ui->rf_Button->setEnabled(true);

    ui->nd_Button->setEnabled(true);

    ui->u_Button->setEnabled(true);

    ui->v_Button->setEnabled(true);

    ui->nb_Button->setEnabled(true);

    ui->ta_Button->setEnabled(true);

    ui->db_Button->setEnabled(true);

    ui->pm_Button->setEnabled(true);

    ui->np_Button->setEnabled(true);

    ui->cr_Button->setEnabled(true);

    ui->mo_Button->setEnabled(true);

    ui->w_Button->setEnabled(true);

    ui->sg_Button->setEnabled(true);

    ui->sm_Button->setEnabled(true);

    ui->pu_Button->setEnabled(true);

    ui->mn_Button->setEnabled(true);

    ui->tc_Button->setEnabled(true);

    ui->re_Button->setEnabled(true);

    ui->bh_Button->setEnabled(true);

    ui->eu_Button->setEnabled(true);

    ui->am_Button->setEnabled(true);

    ui->fe_Button->setEnabled(true);

    ui->ru_Button->setEnabled(true);

    ui->os_Button->setEnabled(true);

    ui->hs_Button->setEnabled(true);

    ui->gd_Button->setEnabled(true);

    ui->cm_Button->setEnabled(true);

    ui->co_Button->setEnabled(true);

    ui->rh_Button->setEnabled(true);

    ui->ir_Button->setEnabled(true);

    ui->mt_Button->setEnabled(true);

    ui->tb_Button->setEnabled(true);

    ui->bk_Button->setEnabled(true);

    ui->ni_Button->setEnabled(true);

    ui->pd_Button_2->setEnabled(true);

    ui->pt_Button->setEnabled(true);

    ui->ds_Button->setEnabled(true);

    ui->dy_Button->setEnabled(true);

    ui->cf_Button->setEnabled(true);

    ui->cu_Button->setEnabled(true);

    ui->ag_Button->setEnabled(true);

    ui->au_Button->setEnabled(true);

    ui->rg_Button->setEnabled(true);

    ui->ho_Button->setEnabled(true);

    ui->es_Button->setEnabled(true);

    ui->zn_Button->setEnabled(true);

    ui->cd_Button->setEnabled(true);

    ui->hg_Button->setEnabled(true);

    ui->cn_Button->setEnabled(true);

    ui->er_Button->setEnabled(true);

    ui->fm_Button->setEnabled(true);

    ui->b_Button->setEnabled(true);

    ui->al_Button->setEnabled(true);

    ui->ga_Button->setEnabled(true);

    ui->ln_Button->setEnabled(true);

    ui->tl_Button->setEnabled(true);

    ui->uut_Button->setEnabled(true);

    ui->tm_Button->setEnabled(true);

    ui->md_Button->setEnabled(true);

    ui->c_Button->setEnabled(true);

    ui->si_Button->setEnabled(true);

    ui->ge_Button->setEnabled(true);

    ui->sn_Button->setEnabled(true);

    ui->pd_Button->setEnabled(true);

    ui->fl_Button->setEnabled(true);

    ui->yb_Button->setEnabled(true);

    ui->no_Button->setEnabled(true);

    ui->n_Button->setEnabled(true);

    ui->p_Button->setEnabled(true);

    ui->as_Button->setEnabled(true);

    ui->sb_Button->setEnabled(true);

    ui->bi_Button->setEnabled(true);

    ui->uup_Button->setEnabled(true);

    ui->lu_Button->setEnabled(true);

    ui->lr_Button->setEnabled(true);

    ui->o_Button->setEnabled(true);

    ui->s_Button->setEnabled(true);

    ui->se_Button->setEnabled(true);

    ui->te_Button->setEnabled(true);

    ui->po_Button->setEnabled(true);

    ui->lv_Button->setEnabled(true);

    ui->f_Button->setEnabled(true);

    ui->cl_Button->setEnabled(true);

    ui->br_Button->setEnabled(true);

    ui->l_Button->setEnabled(true);

    ui->at_Button->setEnabled(true);

    ui->uus_Button->setEnabled(true);

    ui->he_Button->setEnabled(true);

    ui->ne_Button->setEnabled(true);

    ui->ar_Button->setEnabled(true);

    ui->kr_Button->setEnabled(true);

    ui->xe_Button->setEnabled(true);

    ui->rn_Button->setEnabled(true);

    ui->uuo_Button->setEnabled(true);

    ui->lan_Button->setEnabled(true);

    ui->act_Button->setEnabled(true);
}

void MainWindow::on_halo_Button_pressed()
{
    ui->h_Button->setEnabled(false);

    ui->li_Button->setEnabled(false);

    ui->na_Button->setEnabled(false);

    ui->k_Button->setEnabled(false);

    ui->rb_Button->setEnabled(false);

    ui->cs_Button->setEnabled(false);

    ui->fr_Button->setEnabled(false);

    ui->la_Button->setEnabled(false);

    ui->ac_Button->setEnabled(false);

    ui->be_Button->setEnabled(false);

    ui->mg_Button->setEnabled(false);

    ui->ca_Button->setEnabled(false);

    ui->sr_Button->setEnabled(false);

    ui->ba_Button->setEnabled(false);

    ui->ra_Button->setEnabled(false);

    ui->ce_Button->setEnabled(false);

    ui->th_Button->setEnabled(false);

    ui->sc_Button->setEnabled(false);

    ui->y_Button->setEnabled(false);

    ui->pr_Button->setEnabled(false);

    ui->pa_Button->setEnabled(false);

    ui->ti_Button->setEnabled(false);

    ui->zr_Button->setEnabled(false);

    ui->hf_Button->setEnabled(false);

    ui->rf_Button->setEnabled(false);

    ui->nd_Button->setEnabled(false);

    ui->u_Button->setEnabled(false);

    ui->v_Button->setEnabled(false);

    ui->nb_Button->setEnabled(false);

    ui->ta_Button->setEnabled(false);

    ui->db_Button->setEnabled(false);

    ui->pm_Button->setEnabled(false);

    ui->np_Button->setEnabled(false);

    ui->cr_Button->setEnabled(false);

    ui->mo_Button->setEnabled(false);

    ui->w_Button->setEnabled(false);

    ui->sg_Button->setEnabled(false);

    ui->sm_Button->setEnabled(false);

    ui->pu_Button->setEnabled(false);

    ui->mn_Button->setEnabled(false);

    ui->tc_Button->setEnabled(false);

    ui->re_Button->setEnabled(false);

    ui->bh_Button->setEnabled(false);

    ui->eu_Button->setEnabled(false);

    ui->am_Button->setEnabled(false);

    ui->fe_Button->setEnabled(false);

    ui->ru_Button->setEnabled(false);

    ui->os_Button->setEnabled(false);

    ui->hs_Button->setEnabled(false);

    ui->gd_Button->setEnabled(false);

    ui->cm_Button->setEnabled(false);

    ui->co_Button->setEnabled(false);

    ui->rh_Button->setEnabled(false);

    ui->ir_Button->setEnabled(false);

    ui->mt_Button->setEnabled(false);

    ui->tb_Button->setEnabled(false);

    ui->bk_Button->setEnabled(false);

    ui->ni_Button->setEnabled(false);

    ui->pd_Button_2->setEnabled(false);

    ui->pt_Button->setEnabled(false);

    ui->ds_Button->setEnabled(false);

    ui->dy_Button->setEnabled(false);

    ui->cf_Button->setEnabled(false);

    ui->cu_Button->setEnabled(false);

    ui->ag_Button->setEnabled(false);

    ui->au_Button->setEnabled(false);

    ui->rg_Button->setEnabled(false);

    ui->ho_Button->setEnabled(false);

    ui->es_Button->setEnabled(false);

    ui->zn_Button->setEnabled(false);

    ui->cd_Button->setEnabled(false);

    ui->hg_Button->setEnabled(false);

    ui->cn_Button->setEnabled(false);

    ui->er_Button->setEnabled(false);

    ui->fm_Button->setEnabled(false);

    ui->b_Button->setEnabled(false);

    ui->al_Button->setEnabled(false);

    ui->ga_Button->setEnabled(false);

    ui->ln_Button->setEnabled(false);

    ui->tl_Button->setEnabled(false);

    ui->uut_Button->setEnabled(false);

    ui->tm_Button->setEnabled(false);

    ui->md_Button->setEnabled(false);

    ui->c_Button->setEnabled(false);

    ui->si_Button->setEnabled(false);

    ui->ge_Button->setEnabled(false);

    ui->sn_Button->setEnabled(false);

    ui->pd_Button->setEnabled(false);

    ui->fl_Button->setEnabled(false);

    ui->yb_Button->setEnabled(false);

    ui->no_Button->setEnabled(false);

    ui->n_Button->setEnabled(false);

    ui->p_Button->setEnabled(false);

    ui->as_Button->setEnabled(false);

    ui->sb_Button->setEnabled(false);

    ui->bi_Button->setEnabled(false);

    ui->uup_Button->setEnabled(false);

    ui->lu_Button->setEnabled(false);

    ui->lr_Button->setEnabled(false);

    ui->o_Button->setEnabled(false);

    ui->s_Button->setEnabled(false);

    ui->se_Button->setEnabled(false);

    ui->te_Button->setEnabled(false);

    ui->po_Button->setEnabled(false);

    ui->lv_Button->setEnabled(false);

    ui->f_Button->setEnabled(true);

    ui->cl_Button->setEnabled(true);

    ui->br_Button->setEnabled(true);

    ui->l_Button->setEnabled(true);

    ui->at_Button->setEnabled(true);

    ui->uus_Button->setEnabled(true);

    ui->he_Button->setEnabled(false);

    ui->ne_Button->setEnabled(false);

    ui->ar_Button->setEnabled(false);

    ui->kr_Button->setEnabled(false);

    ui->xe_Button->setEnabled(false);

    ui->rn_Button->setEnabled(false);

    ui->uuo_Button->setEnabled(false);

    ui->lan_Button->setEnabled(false);

    ui->act_Button->setEnabled(false);
}

void MainWindow::on_halo_Button_released()
{
    ui->h_Button->setEnabled(true);

    ui->li_Button->setEnabled(true);

    ui->na_Button->setEnabled(true);

    ui->k_Button->setEnabled(true);

    ui->rb_Button->setEnabled(true);

    ui->cs_Button->setEnabled(true);

    ui->fr_Button->setEnabled(true);

    ui->la_Button->setEnabled(true);

    ui->ac_Button->setEnabled(true);

    ui->be_Button->setEnabled(true);

    ui->mg_Button->setEnabled(true);

    ui->ca_Button->setEnabled(true);

    ui->sr_Button->setEnabled(true);

    ui->ba_Button->setEnabled(true);

    ui->ra_Button->setEnabled(true);

    ui->ce_Button->setEnabled(true);

    ui->th_Button->setEnabled(true);

    ui->sc_Button->setEnabled(true);

    ui->y_Button->setEnabled(true);

    ui->pr_Button->setEnabled(true);

    ui->pa_Button->setEnabled(true);

    ui->ti_Button->setEnabled(true);

    ui->zr_Button->setEnabled(true);

    ui->hf_Button->setEnabled(true);

    ui->rf_Button->setEnabled(true);

    ui->nd_Button->setEnabled(true);

    ui->u_Button->setEnabled(true);

    ui->v_Button->setEnabled(true);

    ui->nb_Button->setEnabled(true);

    ui->ta_Button->setEnabled(true);

    ui->db_Button->setEnabled(true);

    ui->pm_Button->setEnabled(true);

    ui->np_Button->setEnabled(true);

    ui->cr_Button->setEnabled(true);

    ui->mo_Button->setEnabled(true);

    ui->w_Button->setEnabled(true);

    ui->sg_Button->setEnabled(true);

    ui->sm_Button->setEnabled(true);

    ui->pu_Button->setEnabled(true);

    ui->mn_Button->setEnabled(true);

    ui->tc_Button->setEnabled(true);

    ui->re_Button->setEnabled(true);

    ui->bh_Button->setEnabled(true);

    ui->eu_Button->setEnabled(true);

    ui->am_Button->setEnabled(true);

    ui->fe_Button->setEnabled(true);

    ui->ru_Button->setEnabled(true);

    ui->os_Button->setEnabled(true);

    ui->hs_Button->setEnabled(true);

    ui->gd_Button->setEnabled(true);

    ui->cm_Button->setEnabled(true);

    ui->co_Button->setEnabled(true);

    ui->rh_Button->setEnabled(true);

    ui->ir_Button->setEnabled(true);

    ui->mt_Button->setEnabled(true);

    ui->tb_Button->setEnabled(true);

    ui->bk_Button->setEnabled(true);

    ui->ni_Button->setEnabled(true);

    ui->pd_Button_2->setEnabled(true);

    ui->pt_Button->setEnabled(true);

    ui->ds_Button->setEnabled(true);

    ui->dy_Button->setEnabled(true);

    ui->cf_Button->setEnabled(true);

    ui->cu_Button->setEnabled(true);

    ui->ag_Button->setEnabled(true);

    ui->au_Button->setEnabled(true);

    ui->rg_Button->setEnabled(true);

    ui->ho_Button->setEnabled(true);

    ui->es_Button->setEnabled(true);

    ui->zn_Button->setEnabled(true);

    ui->cd_Button->setEnabled(true);

    ui->hg_Button->setEnabled(true);

    ui->cn_Button->setEnabled(true);

    ui->er_Button->setEnabled(true);

    ui->fm_Button->setEnabled(true);

    ui->b_Button->setEnabled(true);

    ui->al_Button->setEnabled(true);

    ui->ga_Button->setEnabled(true);

    ui->ln_Button->setEnabled(true);

    ui->tl_Button->setEnabled(true);

    ui->uut_Button->setEnabled(true);

    ui->tm_Button->setEnabled(true);

    ui->md_Button->setEnabled(true);

    ui->c_Button->setEnabled(true);

    ui->si_Button->setEnabled(true);

    ui->ge_Button->setEnabled(true);

    ui->sn_Button->setEnabled(true);

    ui->pd_Button->setEnabled(true);

    ui->fl_Button->setEnabled(true);

    ui->yb_Button->setEnabled(true);

    ui->no_Button->setEnabled(true);

    ui->n_Button->setEnabled(true);

    ui->p_Button->setEnabled(true);

    ui->as_Button->setEnabled(true);

    ui->sb_Button->setEnabled(true);

    ui->bi_Button->setEnabled(true);

    ui->uup_Button->setEnabled(true);

    ui->lu_Button->setEnabled(true);

    ui->lr_Button->setEnabled(true);

    ui->o_Button->setEnabled(true);

    ui->s_Button->setEnabled(true);

    ui->se_Button->setEnabled(true);

    ui->te_Button->setEnabled(true);

    ui->po_Button->setEnabled(true);

    ui->lv_Button->setEnabled(true);

    ui->f_Button->setEnabled(true);

    ui->cl_Button->setEnabled(true);

    ui->br_Button->setEnabled(true);

    ui->l_Button->setEnabled(true);

    ui->at_Button->setEnabled(true);

    ui->uus_Button->setEnabled(true);

    ui->he_Button->setEnabled(true);

    ui->ne_Button->setEnabled(true);

    ui->ar_Button->setEnabled(true);

    ui->kr_Button->setEnabled(true);

    ui->xe_Button->setEnabled(true);

    ui->rn_Button->setEnabled(true);

    ui->uuo_Button->setEnabled(true);

    ui->lan_Button->setEnabled(true);

    ui->act_Button->setEnabled(true);
}

void MainWindow::on_ngas_Button_pressed()
{
    ui->h_Button->setEnabled(false);

    ui->li_Button->setEnabled(false);

    ui->na_Button->setEnabled(false);

    ui->k_Button->setEnabled(false);

    ui->rb_Button->setEnabled(false);

    ui->cs_Button->setEnabled(false);

    ui->fr_Button->setEnabled(false);

    ui->la_Button->setEnabled(false);

    ui->ac_Button->setEnabled(false);

    ui->be_Button->setEnabled(false);

    ui->mg_Button->setEnabled(false);

    ui->ca_Button->setEnabled(false);

    ui->sr_Button->setEnabled(false);

    ui->ba_Button->setEnabled(false);

    ui->ra_Button->setEnabled(false);

    ui->ce_Button->setEnabled(false);

    ui->th_Button->setEnabled(false);

    ui->sc_Button->setEnabled(false);

    ui->y_Button->setEnabled(false);

    ui->pr_Button->setEnabled(false);

    ui->pa_Button->setEnabled(false);

    ui->ti_Button->setEnabled(false);

    ui->zr_Button->setEnabled(false);

    ui->hf_Button->setEnabled(false);

    ui->rf_Button->setEnabled(false);

    ui->nd_Button->setEnabled(false);

    ui->u_Button->setEnabled(false);

    ui->v_Button->setEnabled(false);

    ui->nb_Button->setEnabled(false);

    ui->ta_Button->setEnabled(false);

    ui->db_Button->setEnabled(false);

    ui->pm_Button->setEnabled(false);

    ui->np_Button->setEnabled(false);

    ui->cr_Button->setEnabled(false);

    ui->mo_Button->setEnabled(false);

    ui->w_Button->setEnabled(false);

    ui->sg_Button->setEnabled(false);

    ui->sm_Button->setEnabled(false);

    ui->pu_Button->setEnabled(false);

    ui->mn_Button->setEnabled(false);

    ui->tc_Button->setEnabled(false);

    ui->re_Button->setEnabled(false);

    ui->bh_Button->setEnabled(false);

    ui->eu_Button->setEnabled(false);

    ui->am_Button->setEnabled(false);

    ui->fe_Button->setEnabled(false);

    ui->ru_Button->setEnabled(false);

    ui->os_Button->setEnabled(false);

    ui->hs_Button->setEnabled(false);

    ui->gd_Button->setEnabled(false);

    ui->cm_Button->setEnabled(false);

    ui->co_Button->setEnabled(false);

    ui->rh_Button->setEnabled(false);

    ui->ir_Button->setEnabled(false);

    ui->mt_Button->setEnabled(false);

    ui->tb_Button->setEnabled(false);

    ui->bk_Button->setEnabled(false);

    ui->ni_Button->setEnabled(false);

    ui->pd_Button_2->setEnabled(false);

    ui->pt_Button->setEnabled(false);

    ui->ds_Button->setEnabled(false);

    ui->dy_Button->setEnabled(false);

    ui->cf_Button->setEnabled(false);

    ui->cu_Button->setEnabled(false);

    ui->ag_Button->setEnabled(false);

    ui->au_Button->setEnabled(false);

    ui->rg_Button->setEnabled(false);

    ui->ho_Button->setEnabled(false);

    ui->es_Button->setEnabled(false);

    ui->zn_Button->setEnabled(false);

    ui->cd_Button->setEnabled(false);

    ui->hg_Button->setEnabled(false);

    ui->cn_Button->setEnabled(false);

    ui->er_Button->setEnabled(false);

    ui->fm_Button->setEnabled(false);

    ui->b_Button->setEnabled(false);

    ui->al_Button->setEnabled(false);

    ui->ga_Button->setEnabled(false);

    ui->ln_Button->setEnabled(false);

    ui->tl_Button->setEnabled(false);

    ui->uut_Button->setEnabled(false);

    ui->tm_Button->setEnabled(false);

    ui->md_Button->setEnabled(false);

    ui->c_Button->setEnabled(false);

    ui->si_Button->setEnabled(false);

    ui->ge_Button->setEnabled(false);

    ui->sn_Button->setEnabled(false);

    ui->pd_Button->setEnabled(false);

    ui->fl_Button->setEnabled(false);

    ui->yb_Button->setEnabled(false);

    ui->no_Button->setEnabled(false);

    ui->n_Button->setEnabled(false);

    ui->p_Button->setEnabled(false);

    ui->as_Button->setEnabled(false);

    ui->sb_Button->setEnabled(false);

    ui->bi_Button->setEnabled(false);

    ui->uup_Button->setEnabled(false);

    ui->lu_Button->setEnabled(false);

    ui->lr_Button->setEnabled(false);

    ui->o_Button->setEnabled(false);

    ui->s_Button->setEnabled(false);

    ui->se_Button->setEnabled(false);

    ui->te_Button->setEnabled(false);

    ui->po_Button->setEnabled(false);

    ui->lv_Button->setEnabled(false);

    ui->f_Button->setEnabled(false);

    ui->cl_Button->setEnabled(false);

    ui->br_Button->setEnabled(false);

    ui->l_Button->setEnabled(false);

    ui->at_Button->setEnabled(false);

    ui->uus_Button->setEnabled(false);

    ui->he_Button->setEnabled(true);

    ui->ne_Button->setEnabled(true);

    ui->ar_Button->setEnabled(true);

    ui->kr_Button->setEnabled(true);

    ui->xe_Button->setEnabled(true);

    ui->rn_Button->setEnabled(true);

    ui->uuo_Button->setEnabled(true);

    ui->lan_Button->setEnabled(false);

    ui->act_Button->setEnabled(false);
}

void MainWindow::on_ngas_Button_released()
{
    ui->h_Button->setEnabled(true);

    ui->li_Button->setEnabled(true);

    ui->na_Button->setEnabled(true);

    ui->k_Button->setEnabled(true);

    ui->rb_Button->setEnabled(true);

    ui->cs_Button->setEnabled(true);

    ui->fr_Button->setEnabled(true);

    ui->la_Button->setEnabled(true);

    ui->ac_Button->setEnabled(true);

    ui->be_Button->setEnabled(true);

    ui->mg_Button->setEnabled(true);

    ui->ca_Button->setEnabled(true);

    ui->sr_Button->setEnabled(true);

    ui->ba_Button->setEnabled(true);

    ui->ra_Button->setEnabled(true);

    ui->ce_Button->setEnabled(true);

    ui->th_Button->setEnabled(true);

    ui->sc_Button->setEnabled(true);

    ui->y_Button->setEnabled(true);

    ui->pr_Button->setEnabled(true);

    ui->pa_Button->setEnabled(true);

    ui->ti_Button->setEnabled(true);

    ui->zr_Button->setEnabled(true);

    ui->hf_Button->setEnabled(true);

    ui->rf_Button->setEnabled(true);

    ui->nd_Button->setEnabled(true);

    ui->u_Button->setEnabled(true);

    ui->v_Button->setEnabled(true);

    ui->nb_Button->setEnabled(true);

    ui->ta_Button->setEnabled(true);

    ui->db_Button->setEnabled(true);

    ui->pm_Button->setEnabled(true);

    ui->np_Button->setEnabled(true);

    ui->cr_Button->setEnabled(true);

    ui->mo_Button->setEnabled(true);

    ui->w_Button->setEnabled(true);

    ui->sg_Button->setEnabled(true);

    ui->sm_Button->setEnabled(true);

    ui->pu_Button->setEnabled(true);

    ui->mn_Button->setEnabled(true);

    ui->tc_Button->setEnabled(true);

    ui->re_Button->setEnabled(true);

    ui->bh_Button->setEnabled(true);

    ui->eu_Button->setEnabled(true);

    ui->am_Button->setEnabled(true);

    ui->fe_Button->setEnabled(true);

    ui->ru_Button->setEnabled(true);

    ui->os_Button->setEnabled(true);

    ui->hs_Button->setEnabled(true);

    ui->gd_Button->setEnabled(true);

    ui->cm_Button->setEnabled(true);

    ui->co_Button->setEnabled(true);

    ui->rh_Button->setEnabled(true);

    ui->ir_Button->setEnabled(true);

    ui->mt_Button->setEnabled(true);

    ui->tb_Button->setEnabled(true);

    ui->bk_Button->setEnabled(true);

    ui->ni_Button->setEnabled(true);

    ui->pd_Button_2->setEnabled(true);

    ui->pt_Button->setEnabled(true);

    ui->ds_Button->setEnabled(true);

    ui->dy_Button->setEnabled(true);

    ui->cf_Button->setEnabled(true);

    ui->cu_Button->setEnabled(true);

    ui->ag_Button->setEnabled(true);

    ui->au_Button->setEnabled(true);

    ui->rg_Button->setEnabled(true);

    ui->ho_Button->setEnabled(true);

    ui->es_Button->setEnabled(true);

    ui->zn_Button->setEnabled(true);

    ui->cd_Button->setEnabled(true);

    ui->hg_Button->setEnabled(true);

    ui->cn_Button->setEnabled(true);

    ui->er_Button->setEnabled(true);

    ui->fm_Button->setEnabled(true);

    ui->b_Button->setEnabled(true);

    ui->al_Button->setEnabled(true);

    ui->ga_Button->setEnabled(true);

    ui->ln_Button->setEnabled(true);

    ui->tl_Button->setEnabled(true);

    ui->uut_Button->setEnabled(true);

    ui->tm_Button->setEnabled(true);

    ui->md_Button->setEnabled(true);

    ui->c_Button->setEnabled(true);

    ui->si_Button->setEnabled(true);

    ui->ge_Button->setEnabled(true);

    ui->sn_Button->setEnabled(true);

    ui->pd_Button->setEnabled(true);

    ui->fl_Button->setEnabled(true);

    ui->yb_Button->setEnabled(true);

    ui->no_Button->setEnabled(true);

    ui->n_Button->setEnabled(true);

    ui->p_Button->setEnabled(true);

    ui->as_Button->setEnabled(true);

    ui->sb_Button->setEnabled(true);

    ui->bi_Button->setEnabled(true);

    ui->uup_Button->setEnabled(true);

    ui->lu_Button->setEnabled(true);

    ui->lr_Button->setEnabled(true);

    ui->o_Button->setEnabled(true);

    ui->s_Button->setEnabled(true);

    ui->se_Button->setEnabled(true);

    ui->te_Button->setEnabled(true);

    ui->po_Button->setEnabled(true);

    ui->lv_Button->setEnabled(true);

    ui->f_Button->setEnabled(true);

    ui->cl_Button->setEnabled(true);

    ui->br_Button->setEnabled(true);

    ui->l_Button->setEnabled(true);

    ui->at_Button->setEnabled(true);

    ui->uus_Button->setEnabled(true);

    ui->he_Button->setEnabled(true);

    ui->ne_Button->setEnabled(true);

    ui->ar_Button->setEnabled(true);

    ui->kr_Button->setEnabled(true);

    ui->xe_Button->setEnabled(true);

    ui->rn_Button->setEnabled(true);

    ui->uuo_Button->setEnabled(true);

    ui->lan_Button->setEnabled(true);

    ui->act_Button->setEnabled(true);
}

void MainWindow::on_lant_Button_pressed()
{
    ui->h_Button->setEnabled(false);

    ui->li_Button->setEnabled(false);

    ui->na_Button->setEnabled(false);

    ui->k_Button->setEnabled(false);

    ui->rb_Button->setEnabled(false);

    ui->cs_Button->setEnabled(false);

    ui->fr_Button->setEnabled(false);

    ui->la_Button->setEnabled(true);

    ui->ac_Button->setEnabled(false);

    ui->be_Button->setEnabled(false);

    ui->mg_Button->setEnabled(false);

    ui->ca_Button->setEnabled(false);

    ui->sr_Button->setEnabled(false);

    ui->ba_Button->setEnabled(false);

    ui->ra_Button->setEnabled(false);

    ui->ce_Button->setEnabled(true);

    ui->th_Button->setEnabled(false);

    ui->sc_Button->setEnabled(false);

    ui->y_Button->setEnabled(false);

    ui->pr_Button->setEnabled(true);

    ui->pa_Button->setEnabled(false);

    ui->ti_Button->setEnabled(false);

    ui->zr_Button->setEnabled(false);

    ui->hf_Button->setEnabled(false);

    ui->rf_Button->setEnabled(false);

    ui->nd_Button->setEnabled(true);

    ui->u_Button->setEnabled(false);

    ui->v_Button->setEnabled(false);

    ui->nb_Button->setEnabled(false);

    ui->ta_Button->setEnabled(false);

    ui->db_Button->setEnabled(false);

    ui->pm_Button->setEnabled(true);

    ui->np_Button->setEnabled(false);

    ui->cr_Button->setEnabled(false);

    ui->mo_Button->setEnabled(false);

    ui->w_Button->setEnabled(false);

    ui->sg_Button->setEnabled(false);

    ui->sm_Button->setEnabled(true);

    ui->pu_Button->setEnabled(false);

    ui->mn_Button->setEnabled(false);

    ui->tc_Button->setEnabled(false);

    ui->re_Button->setEnabled(false);

    ui->bh_Button->setEnabled(false);

    ui->eu_Button->setEnabled(true);

    ui->am_Button->setEnabled(false);

    ui->fe_Button->setEnabled(false);

    ui->ru_Button->setEnabled(false);

    ui->os_Button->setEnabled(false);

    ui->hs_Button->setEnabled(false);

    ui->gd_Button->setEnabled(true);

    ui->cm_Button->setEnabled(false);

    ui->co_Button->setEnabled(false);

    ui->rh_Button->setEnabled(false);

    ui->ir_Button->setEnabled(false);

    ui->mt_Button->setEnabled(false);

    ui->tb_Button->setEnabled(true);

    ui->bk_Button->setEnabled(false);

    ui->ni_Button->setEnabled(false);

    ui->pd_Button_2->setEnabled(false);

    ui->pt_Button->setEnabled(false);

    ui->ds_Button->setEnabled(false);

    ui->dy_Button->setEnabled(true);

    ui->cf_Button->setEnabled(false);

    ui->cu_Button->setEnabled(false);

    ui->ag_Button->setEnabled(false);

    ui->au_Button->setEnabled(false);

    ui->rg_Button->setEnabled(false);

    ui->ho_Button->setEnabled(true);

    ui->es_Button->setEnabled(false);

    ui->zn_Button->setEnabled(false);

    ui->cd_Button->setEnabled(false);

    ui->hg_Button->setEnabled(false);

    ui->cn_Button->setEnabled(false);

    ui->er_Button->setEnabled(true);

    ui->fm_Button->setEnabled(false);

    ui->b_Button->setEnabled(false);

    ui->al_Button->setEnabled(false);

    ui->ga_Button->setEnabled(false);

    ui->ln_Button->setEnabled(false);

    ui->tl_Button->setEnabled(false);

    ui->uut_Button->setEnabled(false);

    ui->tm_Button->setEnabled(true);

    ui->md_Button->setEnabled(false);

    ui->c_Button->setEnabled(false);

    ui->si_Button->setEnabled(false);

    ui->ge_Button->setEnabled(false);

    ui->sn_Button->setEnabled(false);

    ui->pd_Button->setEnabled(false);

    ui->fl_Button->setEnabled(false);

    ui->yb_Button->setEnabled(true);

    ui->no_Button->setEnabled(false);

    ui->n_Button->setEnabled(false);

    ui->p_Button->setEnabled(false);

    ui->as_Button->setEnabled(false);

    ui->sb_Button->setEnabled(false);

    ui->bi_Button->setEnabled(false);

    ui->uup_Button->setEnabled(false);

    ui->lu_Button->setEnabled(true);

    ui->lr_Button->setEnabled(false);

    ui->o_Button->setEnabled(false);

    ui->s_Button->setEnabled(false);

    ui->se_Button->setEnabled(false);

    ui->te_Button->setEnabled(false);

    ui->po_Button->setEnabled(false);

    ui->lv_Button->setEnabled(false);

    ui->f_Button->setEnabled(false);

    ui->cl_Button->setEnabled(false);

    ui->br_Button->setEnabled(false);

    ui->l_Button->setEnabled(false);

    ui->at_Button->setEnabled(false);

    ui->uus_Button->setEnabled(false);

    ui->he_Button->setEnabled(false);

    ui->ne_Button->setEnabled(false);

    ui->ar_Button->setEnabled(false);

    ui->kr_Button->setEnabled(false);

    ui->xe_Button->setEnabled(false);

    ui->rn_Button->setEnabled(false);

    ui->uuo_Button->setEnabled(false);

    ui->lan_Button->setEnabled(true);

    ui->act_Button->setEnabled(false);
}

void MainWindow::on_lant_Button_released()
{
    ui->h_Button->setEnabled(true);

    ui->li_Button->setEnabled(true);

    ui->na_Button->setEnabled(true);

    ui->k_Button->setEnabled(true);

    ui->rb_Button->setEnabled(true);

    ui->cs_Button->setEnabled(true);

    ui->fr_Button->setEnabled(true);

    ui->la_Button->setEnabled(true);

    ui->ac_Button->setEnabled(true);

    ui->be_Button->setEnabled(true);

    ui->mg_Button->setEnabled(true);

    ui->ca_Button->setEnabled(true);

    ui->sr_Button->setEnabled(true);

    ui->ba_Button->setEnabled(true);

    ui->ra_Button->setEnabled(true);

    ui->ce_Button->setEnabled(true);

    ui->th_Button->setEnabled(true);

    ui->sc_Button->setEnabled(true);

    ui->y_Button->setEnabled(true);

    ui->pr_Button->setEnabled(true);

    ui->pa_Button->setEnabled(true);

    ui->ti_Button->setEnabled(true);

    ui->zr_Button->setEnabled(true);

    ui->hf_Button->setEnabled(true);

    ui->rf_Button->setEnabled(true);

    ui->nd_Button->setEnabled(true);

    ui->u_Button->setEnabled(true);

    ui->v_Button->setEnabled(true);

    ui->nb_Button->setEnabled(true);

    ui->ta_Button->setEnabled(true);

    ui->db_Button->setEnabled(true);

    ui->pm_Button->setEnabled(true);

    ui->np_Button->setEnabled(true);

    ui->cr_Button->setEnabled(true);

    ui->mo_Button->setEnabled(true);

    ui->w_Button->setEnabled(true);

    ui->sg_Button->setEnabled(true);

    ui->sm_Button->setEnabled(true);

    ui->pu_Button->setEnabled(true);

    ui->mn_Button->setEnabled(true);

    ui->tc_Button->setEnabled(true);

    ui->re_Button->setEnabled(true);

    ui->bh_Button->setEnabled(true);

    ui->eu_Button->setEnabled(true);

    ui->am_Button->setEnabled(true);

    ui->fe_Button->setEnabled(true);

    ui->ru_Button->setEnabled(true);

    ui->os_Button->setEnabled(true);

    ui->hs_Button->setEnabled(true);

    ui->gd_Button->setEnabled(true);

    ui->cm_Button->setEnabled(true);

    ui->co_Button->setEnabled(true);

    ui->rh_Button->setEnabled(true);

    ui->ir_Button->setEnabled(true);

    ui->mt_Button->setEnabled(true);

    ui->tb_Button->setEnabled(true);

    ui->bk_Button->setEnabled(true);

    ui->ni_Button->setEnabled(true);

    ui->pd_Button_2->setEnabled(true);

    ui->pt_Button->setEnabled(true);

    ui->ds_Button->setEnabled(true);

    ui->dy_Button->setEnabled(true);

    ui->cf_Button->setEnabled(true);

    ui->cu_Button->setEnabled(true);

    ui->ag_Button->setEnabled(true);

    ui->au_Button->setEnabled(true);

    ui->rg_Button->setEnabled(true);

    ui->ho_Button->setEnabled(true);

    ui->es_Button->setEnabled(true);

    ui->zn_Button->setEnabled(true);

    ui->cd_Button->setEnabled(true);

    ui->hg_Button->setEnabled(true);

    ui->cn_Button->setEnabled(true);

    ui->er_Button->setEnabled(true);

    ui->fm_Button->setEnabled(true);

    ui->b_Button->setEnabled(true);

    ui->al_Button->setEnabled(true);

    ui->ga_Button->setEnabled(true);

    ui->ln_Button->setEnabled(true);

    ui->tl_Button->setEnabled(true);

    ui->uut_Button->setEnabled(true);

    ui->tm_Button->setEnabled(true);

    ui->md_Button->setEnabled(true);

    ui->c_Button->setEnabled(true);

    ui->si_Button->setEnabled(true);

    ui->ge_Button->setEnabled(true);

    ui->sn_Button->setEnabled(true);

    ui->pd_Button->setEnabled(true);

    ui->fl_Button->setEnabled(true);

    ui->yb_Button->setEnabled(true);

    ui->no_Button->setEnabled(true);

    ui->n_Button->setEnabled(true);

    ui->p_Button->setEnabled(true);

    ui->as_Button->setEnabled(true);

    ui->sb_Button->setEnabled(true);

    ui->bi_Button->setEnabled(true);

    ui->uup_Button->setEnabled(true);

    ui->lu_Button->setEnabled(true);

    ui->lr_Button->setEnabled(true);

    ui->o_Button->setEnabled(true);

    ui->s_Button->setEnabled(true);

    ui->se_Button->setEnabled(true);

    ui->te_Button->setEnabled(true);

    ui->po_Button->setEnabled(true);

    ui->lv_Button->setEnabled(true);

    ui->f_Button->setEnabled(true);

    ui->cl_Button->setEnabled(true);

    ui->br_Button->setEnabled(true);

    ui->l_Button->setEnabled(true);

    ui->at_Button->setEnabled(true);

    ui->uus_Button->setEnabled(true);

    ui->he_Button->setEnabled(true);

    ui->ne_Button->setEnabled(true);

    ui->ar_Button->setEnabled(true);

    ui->kr_Button->setEnabled(true);

    ui->xe_Button->setEnabled(true);

    ui->rn_Button->setEnabled(true);

    ui->uuo_Button->setEnabled(true);

    ui->lan_Button->setEnabled(true);

    ui->act_Button->setEnabled(true);
}

void MainWindow::on_act_Button_2_pressed()
{
    ui->h_Button->setEnabled(false);

    ui->li_Button->setEnabled(false);

    ui->na_Button->setEnabled(false);

    ui->k_Button->setEnabled(false);

    ui->rb_Button->setEnabled(false);

    ui->cs_Button->setEnabled(false);

    ui->fr_Button->setEnabled(false);

    ui->la_Button->setEnabled(false);

    ui->ac_Button->setEnabled(true);

    ui->be_Button->setEnabled(false);

    ui->mg_Button->setEnabled(false);

    ui->ca_Button->setEnabled(false);

    ui->sr_Button->setEnabled(false);

    ui->ba_Button->setEnabled(false);

    ui->ra_Button->setEnabled(false);

    ui->ce_Button->setEnabled(false);

    ui->th_Button->setEnabled(true);

    ui->sc_Button->setEnabled(false);

    ui->y_Button->setEnabled(false);

    ui->pr_Button->setEnabled(false);

    ui->pa_Button->setEnabled(true);

    ui->ti_Button->setEnabled(false);

    ui->zr_Button->setEnabled(false);

    ui->hf_Button->setEnabled(false);

    ui->rf_Button->setEnabled(false);

    ui->nd_Button->setEnabled(false);

    ui->u_Button->setEnabled(true);

    ui->v_Button->setEnabled(false);

    ui->nb_Button->setEnabled(false);

    ui->ta_Button->setEnabled(false);

    ui->db_Button->setEnabled(false);

    ui->pm_Button->setEnabled(false);

    ui->np_Button->setEnabled(true);

    ui->cr_Button->setEnabled(false);

    ui->mo_Button->setEnabled(false);

    ui->w_Button->setEnabled(false);

    ui->sg_Button->setEnabled(false);

    ui->sm_Button->setEnabled(false);

    ui->pu_Button->setEnabled(true);

    ui->mn_Button->setEnabled(false);

    ui->tc_Button->setEnabled(false);

    ui->re_Button->setEnabled(false);

    ui->bh_Button->setEnabled(false);

    ui->eu_Button->setEnabled(false);

    ui->am_Button->setEnabled(true);

    ui->fe_Button->setEnabled(false);

    ui->ru_Button->setEnabled(false);

    ui->os_Button->setEnabled(false);

    ui->hs_Button->setEnabled(false);

    ui->gd_Button->setEnabled(false);

    ui->cm_Button->setEnabled(true);

    ui->co_Button->setEnabled(false);

    ui->rh_Button->setEnabled(false);

    ui->ir_Button->setEnabled(false);

    ui->mt_Button->setEnabled(false);

    ui->tb_Button->setEnabled(false);

    ui->bk_Button->setEnabled(true);

    ui->ni_Button->setEnabled(false);

    ui->pd_Button_2->setEnabled(false);

    ui->pt_Button->setEnabled(false);

    ui->ds_Button->setEnabled(false);

    ui->dy_Button->setEnabled(false);

    ui->cf_Button->setEnabled(true);

    ui->cu_Button->setEnabled(false);

    ui->ag_Button->setEnabled(false);

    ui->au_Button->setEnabled(false);

    ui->rg_Button->setEnabled(false);

    ui->ho_Button->setEnabled(false);

    ui->es_Button->setEnabled(true);

    ui->zn_Button->setEnabled(false);

    ui->cd_Button->setEnabled(false);

    ui->hg_Button->setEnabled(false);

    ui->cn_Button->setEnabled(false);

    ui->er_Button->setEnabled(false);

    ui->fm_Button->setEnabled(true);

    ui->b_Button->setEnabled(false);

    ui->al_Button->setEnabled(false);

    ui->ga_Button->setEnabled(false);

    ui->ln_Button->setEnabled(false);

    ui->tl_Button->setEnabled(false);

    ui->uut_Button->setEnabled(false);

    ui->tm_Button->setEnabled(false);

    ui->md_Button->setEnabled(true);

    ui->c_Button->setEnabled(false);

    ui->si_Button->setEnabled(false);

    ui->ge_Button->setEnabled(false);

    ui->sn_Button->setEnabled(false);

    ui->pd_Button->setEnabled(false);

    ui->fl_Button->setEnabled(false);

    ui->yb_Button->setEnabled(false);

    ui->no_Button->setEnabled(true);

    ui->n_Button->setEnabled(false);

    ui->p_Button->setEnabled(false);

    ui->as_Button->setEnabled(false);

    ui->sb_Button->setEnabled(false);

    ui->bi_Button->setEnabled(false);

    ui->uup_Button->setEnabled(false);

    ui->lu_Button->setEnabled(false);

    ui->lr_Button->setEnabled(true);

    ui->o_Button->setEnabled(false);

    ui->s_Button->setEnabled(false);

    ui->se_Button->setEnabled(false);

    ui->te_Button->setEnabled(false);

    ui->po_Button->setEnabled(false);

    ui->lv_Button->setEnabled(false);

    ui->f_Button->setEnabled(false);

    ui->cl_Button->setEnabled(false);

    ui->br_Button->setEnabled(false);

    ui->l_Button->setEnabled(false);

    ui->at_Button->setEnabled(false);

    ui->uus_Button->setEnabled(false);

    ui->he_Button->setEnabled(false);

    ui->ne_Button->setEnabled(false);

    ui->ar_Button->setEnabled(false);

    ui->kr_Button->setEnabled(false);

    ui->xe_Button->setEnabled(false);

    ui->rn_Button->setEnabled(false);

    ui->uuo_Button->setEnabled(false);

    ui->lan_Button->setEnabled(false);

    ui->act_Button->setEnabled(true);
}

void MainWindow::on_act_Button_2_released()
{
    ui->h_Button->setEnabled(true);

    ui->li_Button->setEnabled(true);

    ui->na_Button->setEnabled(true);

    ui->k_Button->setEnabled(true);

    ui->rb_Button->setEnabled(true);

    ui->cs_Button->setEnabled(true);

    ui->fr_Button->setEnabled(true);

    ui->la_Button->setEnabled(true);

    ui->ac_Button->setEnabled(true);

    ui->be_Button->setEnabled(true);

    ui->mg_Button->setEnabled(true);

    ui->ca_Button->setEnabled(true);

    ui->sr_Button->setEnabled(true);

    ui->ba_Button->setEnabled(true);

    ui->ra_Button->setEnabled(true);

    ui->ce_Button->setEnabled(true);

    ui->th_Button->setEnabled(true);

    ui->sc_Button->setEnabled(true);

    ui->y_Button->setEnabled(true);

    ui->pr_Button->setEnabled(true);

    ui->pa_Button->setEnabled(true);

    ui->ti_Button->setEnabled(true);

    ui->zr_Button->setEnabled(true);

    ui->hf_Button->setEnabled(true);

    ui->rf_Button->setEnabled(true);

    ui->nd_Button->setEnabled(true);

    ui->u_Button->setEnabled(true);

    ui->v_Button->setEnabled(true);

    ui->nb_Button->setEnabled(true);

    ui->ta_Button->setEnabled(true);

    ui->db_Button->setEnabled(true);

    ui->pm_Button->setEnabled(true);

    ui->np_Button->setEnabled(true);

    ui->cr_Button->setEnabled(true);

    ui->mo_Button->setEnabled(true);

    ui->w_Button->setEnabled(true);

    ui->sg_Button->setEnabled(true);

    ui->sm_Button->setEnabled(true);

    ui->pu_Button->setEnabled(true);

    ui->mn_Button->setEnabled(true);

    ui->tc_Button->setEnabled(true);

    ui->re_Button->setEnabled(true);

    ui->bh_Button->setEnabled(true);

    ui->eu_Button->setEnabled(true);

    ui->am_Button->setEnabled(true);

    ui->fe_Button->setEnabled(true);

    ui->ru_Button->setEnabled(true);

    ui->os_Button->setEnabled(true);

    ui->hs_Button->setEnabled(true);

    ui->gd_Button->setEnabled(true);

    ui->cm_Button->setEnabled(true);

    ui->co_Button->setEnabled(true);

    ui->rh_Button->setEnabled(true);

    ui->ir_Button->setEnabled(true);

    ui->mt_Button->setEnabled(true);

    ui->tb_Button->setEnabled(true);

    ui->bk_Button->setEnabled(true);

    ui->ni_Button->setEnabled(true);

    ui->pd_Button_2->setEnabled(true);

    ui->pt_Button->setEnabled(true);

    ui->ds_Button->setEnabled(true);

    ui->dy_Button->setEnabled(true);

    ui->cf_Button->setEnabled(true);

    ui->cu_Button->setEnabled(true);

    ui->ag_Button->setEnabled(true);

    ui->au_Button->setEnabled(true);

    ui->rg_Button->setEnabled(true);

    ui->ho_Button->setEnabled(true);

    ui->es_Button->setEnabled(true);

    ui->zn_Button->setEnabled(true);

    ui->cd_Button->setEnabled(true);

    ui->hg_Button->setEnabled(true);

    ui->cn_Button->setEnabled(true);

    ui->er_Button->setEnabled(true);

    ui->fm_Button->setEnabled(true);

    ui->b_Button->setEnabled(true);

    ui->al_Button->setEnabled(true);

    ui->ga_Button->setEnabled(true);

    ui->ln_Button->setEnabled(true);

    ui->tl_Button->setEnabled(true);

    ui->uut_Button->setEnabled(true);

    ui->tm_Button->setEnabled(true);

    ui->md_Button->setEnabled(true);

    ui->c_Button->setEnabled(true);

    ui->si_Button->setEnabled(true);

    ui->ge_Button->setEnabled(true);

    ui->sn_Button->setEnabled(true);

    ui->pd_Button->setEnabled(true);

    ui->fl_Button->setEnabled(true);

    ui->yb_Button->setEnabled(true);

    ui->no_Button->setEnabled(true);

    ui->n_Button->setEnabled(true);

    ui->p_Button->setEnabled(true);

    ui->as_Button->setEnabled(true);

    ui->sb_Button->setEnabled(true);

    ui->bi_Button->setEnabled(true);

    ui->uup_Button->setEnabled(true);

    ui->lu_Button->setEnabled(true);

    ui->lr_Button->setEnabled(true);

    ui->o_Button->setEnabled(true);

    ui->s_Button->setEnabled(true);

    ui->se_Button->setEnabled(true);

    ui->te_Button->setEnabled(true);

    ui->po_Button->setEnabled(true);

    ui->lv_Button->setEnabled(true);

    ui->f_Button->setEnabled(true);

    ui->cl_Button->setEnabled(true);

    ui->br_Button->setEnabled(true);

    ui->l_Button->setEnabled(true);

    ui->at_Button->setEnabled(true);

    ui->uus_Button->setEnabled(true);

    ui->he_Button->setEnabled(true);

    ui->ne_Button->setEnabled(true);

    ui->ar_Button->setEnabled(true);

    ui->kr_Button->setEnabled(true);

    ui->xe_Button->setEnabled(true);

    ui->rn_Button->setEnabled(true);

    ui->uuo_Button->setEnabled(true);

    ui->lan_Button->setEnabled(true);

    ui->act_Button->setEnabled(true);
}

void MainWindow::on_actionCheck_for_Update_triggered()
{
    u2d = new up2Date(this);
    u2d->setModal(true);
    u2d->show();

    // Connector for the dialog to receive the program version.
    connect(this, SIGNAL(sendV(QString)), u2d, SLOT(receiveV(QString)));

    // Emitter.
    emit sendV(v);
}
