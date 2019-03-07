#include "kamer_quinn.h"
#include "ui_kamer_quinn.h"
#include "hoofd_scherm.h"

kamer_quinn::kamer_quinn(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_quinn),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
}

kamer_quinn::~kamer_quinn()
{
  delete ui;
}

void kamer_quinn::on_knop_nw_clicked()
{
  this->ui->knop_nw->setText("Deur gaat open");
}

void kamer_quinn::on_knop_n_clicked()
{
  this->ui->knop_n->setText("Deur is op slot ga weg >:(");
  this->m_hoofd_scherm->ga_naar(kamer_soort::richel);
}
