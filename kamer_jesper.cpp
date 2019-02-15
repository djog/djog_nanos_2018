#include "kamer_jesper.h"
#include "ui_kamer_jesper.h"
#include "hoofd_scherm.h"

kamer_jesper::kamer_jesper(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_jesper),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
}

kamer_jesper::~kamer_jesper()
{
  delete ui;
}


void kamer_jesper::on_checkBox_pressed()
{
    this->ui->knop_deur->setText("deur is open");
}

void kamer_jesper::on_checkBox_released()
{
      this->ui->knop_deur->setText("deur is dicht");
}

void kamer_jesper::on_pushButton_clicked()
{
    this->ui->pushButton->move(m_x, m_y);
    click = 1;
}
