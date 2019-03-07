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

    void on_pushButton_clicked();

    void on_toolButton_pressed();

    void on_toolButton_released();

    void on_pushButton_2_clicked();

private:
  Ui::kamer_jesper *ui;

  int k_x = 30;
  int k_y = 225;
  int click = 0;
  int gd_x = 50;
  int gd_y = 50;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif // KAMER_JESPER_H
