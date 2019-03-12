#ifndef HOOFD_SCHERM_H
#define HOOFD_SCHERM_H

#include "kamer_soort.h"
#include "voorwerp_soort.h"
#include <vector>
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

  ///De speler heeft een voorwerp gepakt
  void voeg_voorwerp_toe(const voorwerp_soort voorwerp);

private slots:
  ///De speler speelt vals en teleporteert naar een kamer
  void on_box_kamer_valueChanged(int arg1);

private:
  Ui::hoofd_scherm *ui;

  ///Kamer waar de speler nu is
  kamer_soort m_kamer;

  ///Laat het scherm zien van de kamer waar de speler nu is
  void laat_kamer_zien();
};

#endif // HOOFD_SCHERM_H
