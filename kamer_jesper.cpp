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

void kamer_jesper::on_knop_oost_clicked()
{
  m_hoofd_scherm->ga_naar(kamer_soort::jesper);
}
