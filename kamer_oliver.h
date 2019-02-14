#ifndef KAMER_OLIVER_H
#define KAMER_OLIVER_H

#include <QWidget>

namespace Ui {
  class kamer_oliver;
}

class hoofd_scherm;

class kamer_oliver : public QWidget
{
  Q_OBJECT

public:
  explicit kamer_oliver(hoofd_scherm * het_hoofd_scherm, QWidget *parent = 0);
  ~kamer_oliver();

private slots:

private:
  Ui::kamer_oliver *ui;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif // KAMER_OLIVER_H
