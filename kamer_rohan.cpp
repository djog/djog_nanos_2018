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
}

kamer_rohan::~kamer_rohan()
{
  delete ui;
}
