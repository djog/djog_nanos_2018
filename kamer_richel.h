#ifndef KAMER_RICHEL_H
#define KAMER_RICHEL_H

#include <QWidget>

namespace Ui {
  class kamer_richel;
}

class hoofd_scherm;

class kamer_richel : public QWidget
{
  Q_OBJECT //!OCLINT

public:
  explicit kamer_richel(hoofd_scherm * het_hoofd_scherm, QWidget *parent = 0);
  ~kamer_richel();

private slots:
  void on_knop_zo_clicked();

  void on_knop_n_clicked();

  void on_knop_w_clicked();

  void on_knop_spiegel_clicked();

private:
  Ui::kamer_richel *ui;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif // KAMER_RICHEL_H
