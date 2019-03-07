#include "kamer_richel.h"
#include "ui_kamer_richel.h"
#include "hoofd_scherm.h"
#include "voorwerp_soort.h"

kamer_richel::kamer_richel(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_richel),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
}

kamer_richel::~kamer_richel()
{
  delete ui;
}

void kamer_richel::on_knop_zo_clicked()
{
  m_hoofd_scherm->ga_naar(kamer_soort::quinn);
}

void kamer_richel::on_knop_n_clicked()
{
  m_hoofd_scherm->ga_naar(kamer_soort::jasper);
}

void kamer_richel::on_knop_w_clicked()
{
  //m_hoofd_scherm->ga_naar(kamer_soort::rohan);
}

void kamer_richel::on_knop_links_onder_clicked()
{
  this->setStyleSheet(
    "QDialog {\n"
    "  background-color: qlineargradient("
      "x1: 0, y1: 0, x2: 1, y2: 1, stop: 0 #ffb, stop: 1 #fbb);\n"
    "  border: 1px solid black\n"
    "}\n"
    "\n"
    "QWidget {\n"
    "  font: bold huge monospace;\n"
    "  color: blak;\n"
    "  background-color: qlineargradient("
      "x1: 0, y1: 0, x2: 1, y2: 1, stop: 0 #ffb, stop: 1 #fbb);\n"
    "}\n"
  );
}

void kamer_richel::on_knop_rechts_boven_clicked()
{
  this->setStyleSheet(
    "QDialog {\n"
    "  background-color: black;\n"
    "  border: 1px solid red\n"
    "}\n"
    "\n"
    "QWidget {\n"
    "  font: bold huge monospace;\n"
    "  color: white;\n"
    "  background-color: black;\n"
    "  border: 2px solid red\n"
    "}\n"
  );
}

void kamer_richel::on_knop_hanne_clicked()
{
  ui->label_praat->setText("Gezellig!\nHier heb je\nmijn spiegel");
  this->m_hoofd_scherm->voeg_voorwerp_toe(voorwerp_soort::spiegel);
}
