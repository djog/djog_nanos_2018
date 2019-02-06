#include "dial_pong_dialog.h"
#include "ui_dial_pong_dialog.h"

dial_pong_dialog::dial_pong_dialog(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::dial_pong_dialog),
  m_x{0.0},
  m_y{0.0},
  m_dx{0.1},
  m_dy{0.1}
{
  ui->setupUi(this);
  startTimer(1);
}

dial_pong_dialog::~dial_pong_dialog()
{
  delete ui;
}


void dial_pong_dialog::timerEvent(QTimerEvent *event)
{
  m_x += m_dx;
  m_y += m_dy;
  ui->dial->setGeometry(m_x, m_y, 100, 100);
}
