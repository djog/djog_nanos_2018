#include "hoofd_scherm.h"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  const std::vector<std::string> args(argv, argv + argc);
  if (std::count(std::begin(args), std::end(args), "--versie")) {
    std::cout << "Dit is de versie van vandaag\n";
    return 0; // 0: alles ging goed
  }

  hoofd_scherm w;
  w.show();

  return a.exec();
}
