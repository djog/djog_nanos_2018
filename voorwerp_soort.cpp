#include "voorwerp_soort.h"

#include <cassert>

struct voorwerp_t {
    const voorwerp_soort soort;
    const std::string woord;
};

static voorwerp_t voorwerpen[] = {
    {voorwerp_soort::spiegel, "spiegel"},
    {voorwerp_soort::pistool, "pistool"},
    {voorwerp_soort::tak, "beschimmelde tak"},
};

static const int voorwerpen_len = sizeof(voorwerpen) / sizeof(voorwerp_t);

std::string als_woord(const voorwerp_soort voorwerp)
{
    for (int i = 0; i < voorwerpen_len; ++i) {
        if (voorwerpen[i].soort == voorwerp) {
            return voorwerpen[i].woord;
        }
    }
    assert(!"Ik weet niet hoe ik een woord maak van dit voorwerp"); //!OCLINT deze manier is prima om aan te geven dat iets nooit gebeurt
    return ""; // Dan return ik maar niks
}
