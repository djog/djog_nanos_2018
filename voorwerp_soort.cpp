#include "voorwerp_soort.h"

#include <cassert>

std::string als_woord(const voorwerp_soort voorwerp)
{
  if (voorwerp == voorwerp_soort::pistool) return "pistool";
  if (voorwerp == voorwerp_soort::sleutel) return "sleutel";
  if (voorwerp == voorwerp_soort::spiegel) return "spiegel";
  if (voorwerp == voorwerp_soort::tak) return "beschimelde tak";
  assert(!"Ik weet niet hoe ik een woord maak van dit voorwerp"); //!OCLINT deze manier is prima om aan te geven dat iets nooit gebeurt
  return ""; // Dan return ik maar niks
}
