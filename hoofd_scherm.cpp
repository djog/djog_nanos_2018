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
#include "kamer_slaapkamer.h"
#include "ui_hoofd_scherm.h"

#include <cassert>

hoofd_scherm::hoofd_scherm(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::hoofd_scherm),
  m_kamer{kamer_soort::daan}
{
  ui->setupUi(this);

  ui->kamers->layout()->setMargin(0);
  ui->kamers->setContentsMargins(0, 0, 0, 0);

  //Dit moet op alfabet
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
  ui->kamers->addWidget(new kamer_slaapkamer(this, this));
  ga_naar(kamer_soort::slaapkamer);
}

hoofd_scherm::~hoofd_scherm()
{
  delete ui;
}

void hoofd_scherm::ga_naar(const kamer_soort kamer)
{
  m_kamer = kamer;
  this->ui->box_kamer->setValue(static_cast<int>(kamer));
  laat_kamer_zien();
}

void hoofd_scherm::laat_kamer_zien()
{
  ui->kamers->setCurrentIndex(static_cast<int>(m_kamer));
}

void hoofd_scherm::on_box_kamer_valueChanged(int arg1)
{
  m_kamer = static_cast<kamer_soort>(arg1);
  laat_kamer_zien();
}

void hoofd_scherm::voeg_voorwerp_toe(const voorwerp_soort voorwerp)
{
  ui->list_voorwerpen->addItem(QString::fromStdString(als_woord(voorwerp)));
}

void hoofd_scherm::haal_voorwerp_weg(const voorwerp_soort voorwerp)
{
    QList<QListWidgetItem*> items = ui->list_voorwerpen->findItems(QString::fromStdString(als_woord(voorwerp)), Qt::MatchExactly);

    foreach(QListWidgetItem * item, items)
    {
        ui->list_voorwerpen->removeItemWidget(item);
        delete item;
    }
}
