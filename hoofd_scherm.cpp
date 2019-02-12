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
  ui->kamers->addWidget(new kamer_richel(this, this));
  ui->kamers->addWidget(new kamer_quinn(this, this));
  //ui->kamer->setLayout(new QVBoxLayout);
  //assert(ui->kamer->layout());
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
  switch (m_kamer)
  {
    case kamer_soort::richel:
      ui->kamers->setCurrentIndex(0);
      break;
    case kamer_soort::quinn:
      ui->kamers->setCurrentIndex(1);
      break;
  }
}

void hoofd_scherm::on_spinBox_valueChanged(int arg1)
{
  m_kamer = static_cast<kamer_soort>(arg1);
  laat_kamer_zien();
}
