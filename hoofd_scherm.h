#ifndef HOOFD_SCHERM_H
#define HOOFD_SCHERM_H

#include "kamer_soort.h"
#include <QDialog>

namespace Ui {
  class hoofd_scherm;
}

class hoofd_scherm : public QDialog
{
  Q_OBJECT //!OCLINT

public:
  explicit hoofd_scherm(QWidget *parent = 0);
  ~hoofd_scherm();

  ///Ga naar een kamer
  void ga_naar(const kamer_soort kamer);

private slots:
  void on_spinBox_valueChanged(int arg1);

private:
  Ui::hoofd_scherm *ui;

  ///Kamer waar de speler nu is
  kamer_soort m_kamer;

  ///Laat het scherm zien van de kamer waar de speler nu is
  void laat_kamer_zien();
};

#endif // HOOFD_SCHERM_H
