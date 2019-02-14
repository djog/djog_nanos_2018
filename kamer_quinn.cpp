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
