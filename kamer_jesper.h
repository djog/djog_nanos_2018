#ifndef KAMER_JESPER_H
#define KAMER_JESPER_H

#include <QWidget>

namespace Ui {
  class kamer_jesper;
}

class hoofd_scherm;

class kamer_jesper : public QWidget
{
  Q_OBJECT //!OCLINT

public:
  explicit kamer_jesper(hoofd_scherm * het_hoofd_scherm, QWidget *parent = 0);
  ~kamer_jesper();

private slots:
  void on_kast_clicked();
  void on_kist_clicked();
  void on_deur_clicked();
  void on_deur_knop_pressed();
  void on_deur_knop_released();
  void on_geheime_deur_clicked();

private:
  Ui::kamer_jesper *ui;

  bool deur_open = false;
  int items_in_kist = 2;
  const int kast_open_x = 30;
  const int kast_open_y = 225;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif // KAMER_JESPER_H
