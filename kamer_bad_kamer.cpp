#include "kamer_bad_kamer.h"
#include "ui_kamer_bad_kamer.h"
#include "hoofd_scherm.h"

#include <QListWidget>
#include <cassert>

kamer_bad_kamer::kamer_bad_kamer(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_bad_kamer),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
}

kamer_bad_kamer::~kamer_bad_kamer()
{
  delete ui;
}

void kamer_bad_kamer::on_knop_nw_clicked()
{
  if (m_hoofd_scherm->heeft_voorwerp(voorwerp_soort::spiegel))
  {
      //Doe dan iets
  }
  this->ui->knop_nw->setText("Deur ging open");
  this->m_hoofd_scherm->ga_naar(kamer_soort::richel);

}

void kamer_bad_kamer::on_knop_n_clicked()
{
  this->ui->knop_n->setText("Deur ging open");
  this->m_hoofd_scherm->ga_naar(kamer_soort::oliver);
}

void kamer_bad_kamer::on_knop_o_clicked()
{
    this->ui->knop_o->setText("Deur ging open");
    this->m_hoofd_scherm->ga_naar(kamer_soort::mees);
}

void kamer_bad_kamer::on_pushButton_clicked()
{
   this->ui->pushButton->setText("Deur ging al open");
   this->m_hoofd_scherm->ga_naar(kamer_soort::rohan);
}
