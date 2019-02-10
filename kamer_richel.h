#ifndef KAMER_RICHEL_H
#define KAMER_RICHEL_H

#include <QWidget>

namespace Ui {
  class kamer_richel;
}

class kamer_richel : public QWidget
{
  Q_OBJECT

public:
  explicit kamer_richel(QWidget *parent = 0);
  ~kamer_richel();

private:
  Ui::kamer_richel *ui;
};

#endif // KAMER_RICHEL_H
