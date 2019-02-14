#include "hoofd_scherm.h"
#include "kamer_daan.h"
#include "kamer_jasper.h"
#include "kamer_jesper.h"
#include "kamer_judith.h"
#include "kamer_kyrill.h"
#include "kamer_mees.h"
#include "kamer_oliver.h"
#include "kamer_quinn.h"
#include "kamer_richel.h"
#include "kamer_rohan.h"
#include "kamer_seny.h"
#include "ui_hoofd_scherm.h"

#include <cassert>

hoofd_scherm::hoofd_scherm(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::hoofd_scherm),
  m_kamer{kamer_soort::richel}
{
  ui->setupUi(this);
  ui->kamers->addWidget(new kamer_daan(this, this));
  ui->kamers->addWidget(new kamer_jasper(this, this));
  ui->kamers->addWidget(new kamer_jesper(this, this));
  ui->kamers->addWidget(new kamer_judith(this, this));
  ui->kamers->addWidget(new kamer_kyrill(this, this));
  ui->kamers->addWidget(new kamer_mees(this, this));
  ui->kamers->addWidget(new kamer_oliver(this, this));
  ui->kamers->addWidget(new kamer_quinn(this, this));
  ui->kamers->addWidget(new kamer_richel(this, this));
  ui->kamers->addWidget(new kamer_rohan(this, this));
  ui->kamers->addWidget(new kamer_seny(this, this));
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
  ui->kamers->setCurrentIndex(static_cast<int>(m_kamer));
}

void hoofd_scherm::on_spinBox_valueChanged(int arg1)
{
  m_kamer = static_cast<kamer_soort>(arg1);
  laat_kamer_zien();
}
