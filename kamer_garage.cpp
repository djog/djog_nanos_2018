#include "kamer_garage.h"
#include "ui_kamer_garage.h"
#include "hoofd_scherm.h"

kamer_garage::kamer_garage(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_garage),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
  this->ui->pushButton->setHidden(true);
}

kamer_garage::~kamer_garage()
{
  delete ui;
}

void kamer_garage::on_pushButton_clicked()
{
    m_hoofd_scherm->ga_naar(kamer_soort::quinn);
}

void kamer_garage::on_pushButton_2_clicked()
{
    this->ui->pushButton->setHidden(false);
}
