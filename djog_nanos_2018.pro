SOURCES += \
  hoofd_scherm.cpp \
  kamer_daan.cpp \
  kamer_garage.cpp \
  kamer_jasper.cpp \
  kamer_jesper.cpp \
  kamer_judith.cpp \
  kamer_kelder.cpp \
  kamer_kyrill.cpp \
  kamer_mees.cpp \
  kamer_oliver.cpp \
  kamer_richel.cpp \
  kamer_rohan.cpp \
  kamer_quinn.cpp \
  kamer_seny.cpp \
  kamer_slaapkamer.cpp \
  kamer_soort.cpp \
  kamer_bad_kamer.cpp \
  kamer_portals.cpp \
  voorwerp_soort.cpp

HEADERS += \
  hoofd_scherm.h \
  kamer_daan.h \
  kamer_garage.h \
  kamer_jasper.h \
  kamer_jesper.h \
  kamer_judith.h \
  kamer_kelder.h \
  kamer_kyrill.h\
  kamer_mees.h \
  kamer_oliver.h \
  kamer_richel.h \
  kamer_rohan.h \
  kamer_quinn.h \
  kamer_seny.h \
  kamer_slaapkamer.h \
  kamer_portals.h \
  kamer_soort.h \
  kamer_bad_kamer.h \
  voorwerp_soort.h

FORMS += \
  hoofd_scherm.ui \
  kamer_daan.ui \
  kamer_garage.ui \
  kamer_jasper.ui \
  kamer_jesper.ui \
  kamer_judith.ui \
  kamer_kelder.ui \
  kamer_kyrill.ui \
  kamer_mees.ui \
  kamer_oliver.ui \
  kamer_quinn.ui \
  kamer_rohan.ui \
  kamer_richel.ui \
  kamer_seny.ui \
  kamer_bad_kamer.ui \
  kamer_portals.ui \
  kamer_slaapkamer.ui

RESOURCES += \
    djog_nanos_2018.qrc

# Entry point for user
SOURCES += main.cpp

# C++14
CONFIG += c++14
QMAKE_CXXFLAGS += -std=c++14

# High warning levels
# SFML goes bad with -Weffc++
QMAKE_CXXFLAGS += -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic -Werror

unix:!macx {
  # Fix error: unrecognized option '--push-state--no-as-needed'
  QMAKE_LFLAGS += -fuse-ld=gold
}

# Debug and release settings
CONFIG += debug_and_release
CONFIG(release, debug|release) {

  DEFINES += NDEBUG

  # GNU/Linux
  unix:!macx {
    # gprof
    QMAKE_CXXFLAGS += -pg
    QMAKE_LFLAGS += -pg
  }
}

CONFIG(debug, debug|release) {

  # GNU/Linux
  unix:!macx {
    # gcov
    GCC: QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
    GCC: LIBS += -lgcov

    # helgrind, for helgrind and memcheck
    QMAKE_LFLAGS += -pthread -Wl,--no-as-needed

    # UBSAN
    QMAKE_CXXFLAGS += -fsanitize=undefined
    QMAKE_LFLAGS += -fsanitize=undefined
    LIBS += -lubsan
  }
}

# High warning level, warnings are errors
QMAKE_CXXFLAGS += -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic
QMAKE_CXXFLAGS += -Werror

# Qt5
QT += core gui widgets

# QResources give this error
QMAKE_CXXFLAGS += -Wno-unused-variable

# Fixes
#/usr/include/boost/math/constants/constants.hpp:277: error: unable to find numeric literal operator 'operator""Q'
#   BOOST_DEFINE_MATH_CONSTANT(half, 5.000000000000000000000000000000000000e-01, "5.00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000e-01")
#   ^
QMAKE_CXXFLAGS += -fext-numeric-literals

# Prevent Qt for failing with this error:
# qrc_[*].cpp:400:44: error: 'qInitResources_[*]__init_variable__' defined but not used
# [*]: the resource filename
QMAKE_CXXFLAGS += -Wno-unused-variable

DISTFILES += \
    plaatjes/Bowser.png

