#ifndef VOORWERP_SOORT_H
#define VOORWERP_SOORT_H

#include <string>

enum class voorwerp_soort
{
  spiegel
};

///Maak een woord van een voorwerp,
///bijvoorbeeld voorwerp_soort::spiegel wordt het woord 'spiegel'
std::string als_woord(const voorwerp_soort voorwerp);


#endif // VOORWERP_SOORT_H
