#include "keimooi_dialog.h"
#include "ui_keimooi_dialog.h"

keimooi_dialog::keimooi_dialog(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::keimooi_dialog)
{
  ui->setupUi(this);
}

keimooi_dialog::~keimooi_dialog()
{
  delete ui;
}
