#include "kamer_daan.h"
#include "ui_kamer_daan.h"
#include "hoofd_scherm.h"

kamer_daan::kamer_daan(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_daan),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
}

kamer_daan::~kamer_daan()
{
  delete ui;
}

void kamer_daan::on_knop_oost_clicked()
{
  m_hoofd_scherm->ga_naar(kamer_soort::daan);
}

void kamer_daan::on_knop_o_clicked()
{
  this->ui->knop_o->setText("1 11 raampje of 111");
}
