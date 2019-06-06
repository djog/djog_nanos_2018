#include "kamer_soort.h"

void test_kamer_soort()
{
  //Alle kamers van het huis bestaan
  {
    static_assert(kamer_soort::garage, "");
    static_assert(kamer_soort::hal, "");
    static_assert(kamer_soort::lab, "");
    static_assert(kamer_soort::slaapkamer, "");
    static_assert(kamer_soort::slaapkamer_ouders, "");
  }
}
