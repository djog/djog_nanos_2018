#include "kamer_rohan.h"
#include "ui_kamer_rohan.h"
#include "hoofd_scherm.h"

kamer_rohan::kamer_rohan(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_rohan),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
  this->ui->knop_n->setHidden(true);
  this->ui->knop_w->setHidden(true);
  this->ui->knop_o->setHidden(true);

}

kamer_rohan::~kamer_rohan()
{
  delete ui;
}

void kamer_rohan::on_commandLinkButton_clicked()
{
    this->ui->knop_n->setVisible(true);
    this->ui->knop_w->setVisible(true);
    this->ui->knop_o->setVisible(true);
}


