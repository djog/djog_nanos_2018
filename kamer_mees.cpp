#include "kamer_mees.h"
#include "ui_kamer_mees.h"
#include "hoofd_scherm.h"

kamer_mees::kamer_mees(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_mees),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
}

kamer_mees::~kamer_mees()
{
  delete ui;
}

void kamer_mees::on_knop_w_clicked()
{
  this->ui->knop_w->setText("Hallo");
}



void kamer_mees::on_pushButton_2_pressed()
{
     this->ui->label_2->setText("er ligt niks ");
}

void kamer_mees::on_pushButton_2_released()
{
    this->ui->label_2->setText(" ");
}
