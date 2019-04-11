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

void kamer_bad_kamer::on_pushButton_clicked()
{
    this->ui->pushButton->setText("bezet");
}
