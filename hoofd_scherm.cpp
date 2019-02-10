#include "hoofd_scherm.h"
#include "kamer_richel.h"
#include "ui_hoofd_scherm.h"

#include <cassert>

hoofd_scherm::hoofd_scherm(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::hoofd_scherm),
  m_kamer{kamer_soort::richel}
{
  ui->setupUi(this);
  ui->kamer->setLayout(new QVBoxLayout);
  assert(ui->kamer->layout());
  laat_kamer_zien();
}

hoofd_scherm::~hoofd_scherm()
{
  delete ui;
}

void hoofd_scherm::laat_kamer_zien()
{
  for (const auto kindje: ui->kamer->layout()->children())
  {
    delete kindje;
  }
  ui->kamer->layout()->addWidget(new kamer_richel);
}
