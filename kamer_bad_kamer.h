#ifndef kamer_bad_kamer_H
#define kamer_bad_kamer_H

#include <QWidget>

namespace Ui {
  class kamer_bad_kamer;
}

class hoofd_scherm;

class kamer_bad_kamer : public QWidget
{
  Q_OBJECT //!OCLINT

public:
  explicit kamer_bad_kamer(hoofd_scherm * het_hoofd_scherm, QWidget *parent = 0);
  ~kamer_bad_kamer();

private slots:

  void on_pushButton_clicked();

private:
  Ui::kamer_bad_kamer *ui;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif // kamer_bad_kamer_H
