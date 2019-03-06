#include "voorwerp_soort.h"

#include <cassert>
std::string als_woord(const voorwerp_soort voorwerp)
{
  if (voorwerp == voorwerp_soort::spiegel) return "spiegel";
  assert(!"Ik weet niet hoe ik een woord maak van dit voorwerp");
  return ""; // Dan return ik maar niks
}
