#include "kamer_soort.h"

void test_kamer_soort()
{
  //Alle kamers van het huis bestaan
  {
    static_assert(kamer_soort::garage, "");
    //#define MAAK_ISSUE_82
    #ifdef MAAK_ISSUE_82
    static_assert(kamer_soort::hal, "");
    #endif // MAAK_ISSUE_82

    //#define MAAK_ISSUE_83
    #ifdef MAAK_ISSUE_83
    static_assert(kamer_soort::lab, "");
    #endif // MAAK_ISSUE_83

    static_assert(kamer_soort::slaapkamer, "");

    //#define MAAK_ISSUE_84
    #ifdef MAAK_ISSUE_84
    static_assert(kamer_soort::slaapkamer_ouders, "");
    #endif // MAAK_ISSUE_84
  }
}
