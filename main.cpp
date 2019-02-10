#include "hoofd_scherm.h"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  hoofd_scherm w;
  w.show();

  return a.exec();
}
