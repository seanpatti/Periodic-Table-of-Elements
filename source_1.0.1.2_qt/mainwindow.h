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

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include "elemDialog.h"
#include "aboutDialog.h"
#include "up2date.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void getVer(QString);

    void setElement(QString s);


private slots:

    void on_h_Button_clicked();

    void on_li_Button_clicked();

    void on_na_Button_clicked();

    void on_k_Button_clicked();

    void on_rb_Button_clicked();

    void on_cs_Button_clicked();

    void on_fr_Button_clicked();

    void on_la_Button_clicked();

    void on_ac_Button_clicked();

    void on_be_Button_clicked();

    void on_mg_Button_clicked();

    void on_ca_Button_clicked();

    void on_sr_Button_clicked();

    void on_ba_Button_clicked();

    void on_ra_Button_clicked();

    void on_ce_Button_clicked();

    void on_th_Button_clicked();

    void on_sc_Button_clicked();

    void on_y_Button_clicked();

    void on_pr_Button_clicked();

    void on_pa_Button_clicked();

    void on_ti_Button_clicked();

    void on_zr_Button_clicked();

    void on_hf_Button_clicked();

    void on_rf_Button_clicked();

    void on_nd_Button_clicked();

    void on_u_Button_clicked();

    void on_v_Button_clicked();

    void on_nb_Button_clicked();

    void on_ta_Button_clicked();

    void on_db_Button_clicked();

    void on_pm_Button_clicked();

    void on_np_Button_clicked();

    void on_cr_Button_clicked();

    void on_mo_Button_clicked();

    void on_w_Button_clicked();

    void on_sg_Button_clicked();

    void on_sm_Button_clicked();

    void on_pu_Button_clicked();

    void on_mn_Button_clicked();

    void on_tc_Button_clicked();

    void on_re_Button_clicked();

    void on_bh_Button_clicked();

    void on_eu_Button_clicked();

    void on_am_Button_clicked();

    void on_fe_Button_clicked();

    void on_ru_Button_clicked();

    void on_os_Button_clicked();

    void on_hs_Button_clicked();

    void on_gd_Button_clicked();

    void on_cm_Button_clicked();

    void on_co_Button_clicked();

    void on_rh_Button_clicked();

    void on_ir_Button_clicked();

    void on_mt_Button_clicked();

    void on_tb_Button_clicked();

    void on_bk_Button_clicked();

    void on_ni_Button_clicked();

    void on_pd_Button_2_clicked();

    void on_pt_Button_clicked();

    void on_ds_Button_clicked();

    void on_dy_Button_clicked();

    void on_cf_Button_clicked();

    void on_cu_Button_clicked();

    void on_ag_Button_clicked();

    void on_au_Button_clicked();

    void on_rg_Button_clicked();

    void on_ho_Button_clicked();

    void on_es_Button_clicked();

    void on_zn_Button_clicked();

    void on_cd_Button_clicked();

    void on_hg_Button_clicked();

    void on_cn_Button_clicked();

    void on_er_Button_clicked();

    void on_fm_Button_clicked();

    void on_b_Button_clicked();

    void on_al_Button_clicked();

    void on_ga_Button_clicked();

    void on_ln_Button_clicked();

    void on_tl_Button_clicked();

    void on_uut_Button_clicked();

    void on_tm_Button_clicked();

    void on_md_Button_clicked();

    void on_c_Button_clicked();

    void on_si_Button_clicked();

    void on_ge_Button_clicked();

    void on_sn_Button_clicked();

    void on_pd_Button_clicked();

    void on_fl_Button_clicked();

    void on_yb_Button_clicked();

    void on_no_Button_clicked();

    void on_n_Button_clicked();

    void on_p_Button_clicked();

    void on_as_Button_clicked();

    void on_sb_Button_clicked();

    void on_bi_Button_clicked();

    void on_uup_Button_clicked();

    void on_lu_Button_clicked();

    void on_lr_Button_clicked();

    void on_o_Button_clicked();

    void on_s_Button_clicked();

    void on_se_Button_clicked();

    void on_te_Button_clicked();

    void on_po_Button_clicked();

    void on_lv_Button_clicked();

    void on_f_Button_clicked();

    void on_cl_Button_clicked();

    void on_br_Button_clicked();

    void on_l_Button_clicked();

    void on_at_Button_clicked();

    void on_uus_Button_clicked();

    void on_he_Button_clicked();

    void on_ne_Button_clicked();

    void on_ar_Button_clicked();

    void on_kr_Button_clicked();

    void on_xe_Button_clicked();

    void on_rn_Button_clicked();

    void on_uuo_Button_clicked();

    void on_actionAbout_triggered();

    void on_actionExit_triggered();

    void on_am_Button_2_pressed();

    void on_am_Button_2_released();

    void on_ae_Button_pressed();

    void on_ae_Button_released();

    void on_tm_Button_2_pressed();

    void on_tm_Button_2_released();

    void on_bm_Button_pressed();

    void on_bm_Button_released();

    void on_semi_Button_pressed();

    void on_semi_Button_released();

    void on_nonm_Button_pressed();

    void on_nonm_Button_released();

    void on_halo_Button_pressed();

    void on_halo_Button_released();

    void on_ngas_Button_pressed();

    void on_ngas_Button_released();

    void on_lant_Button_pressed();

    void on_lant_Button_released();

    void on_act_Button_2_pressed();

    void on_act_Button_2_released();

    void on_actionCheck_for_Update_triggered();

signals:

    // Signal to send the element name.
    void sendName(QString);

    // Signal to send the program version string.
    void sendV(QString);

private:
    Ui::MainWindow *ui;
    elemDialog *dialog;
    aboutDialog *about;
    up2Date *u2d;
};

#endif // MAINWINDOW_H
