#include "hoofd_scherm.h"
#include "kamer_quinn.h"
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

void hoofd_scherm::ga_naar(const kamer_soort kamer)
{
  m_kamer = kamer;
  laat_kamer_zien();
}

void hoofd_scherm::laat_kamer_zien()
{
  delete ui->kamer->layout();
  ui->kamer->setLayout(new QVBoxLayout);
  switch (m_kamer)
  {
    case kamer_soort::richel:
      ui->kamer->layout()->addWidget(new kamer_richel(this));
      break;
    case kamer_soort::quinn:
      ui->kamer->layout()->addWidget(new kamer_quinn(this));
      break;
  }
}
