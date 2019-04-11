#include "kamer_kelder.h"
#include "ui_kamer_kelder.h"
#include "hoofd_scherm.h"

kamer_kelder::kamer_kelder(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_kelder),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
}

kamer_kelder::~kamer_kelder()
{
  delete ui;
}
