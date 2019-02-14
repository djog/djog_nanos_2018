#include "kamer_jasper.h"
#include "ui_kamer_jasper.h"
#include "hoofd_scherm.h"

kamer_jasper::kamer_jasper(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_jasper),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
}

kamer_jasper::~kamer_jasper()
{
  delete ui;
}
