#ifndef KAMER_KELDER_H
#define KAMER_KELDER_H

#include <QWidget>

namespace Ui {
  class kamer_kelder;
}

class hoofd_scherm;

class kamer_kelder : public QWidget
{
  Q_OBJECT //!OCLINT

public:
  explicit kamer_kelder(hoofd_scherm * het_hoofd_scherm, QWidget *parent = 0);
  ~kamer_kelder();

private slots:

private:
  Ui::kamer_kelder *ui;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif // KAMER_kelder_H
