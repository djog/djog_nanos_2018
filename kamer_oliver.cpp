#include "kamer_oliver.h"
#include "ui_kamer_oliver.h"
#include "hoofd_scherm.h"

kamer_oliver::kamer_oliver(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_oliver),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
}

kamer_oliver::~kamer_oliver()
{
  delete ui;
}
