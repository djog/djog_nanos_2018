#include "kamer_richel.h"
#include "ui_kamer_richel.h"
#include "hoofd_scherm.h"

kamer_richel::kamer_richel(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_richel),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
}

kamer_richel::~kamer_richel()
{
  delete ui;
}

void kamer_richel::on_knop_zo_clicked()
{
  m_hoofd_scherm->ga_naar(kamer_soort::quinn);
}
