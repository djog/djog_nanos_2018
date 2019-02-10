#include "kamer_richel.h"
#include "ui_kamer_richel.h"

kamer_richel::kamer_richel(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::kamer_richel)
{
  ui->setupUi(this);
}

kamer_richel::~kamer_richel()
{
  delete ui;
}
