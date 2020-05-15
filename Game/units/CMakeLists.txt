cmake_minimum_required(VERSION 2.8)
project(GameUnits)

set(
        SOURCES
        Archer.cpp
        Artillery.cpp
        EnglishArcher.cpp
        EnglishArtillery.cpp
        EnglishSwordsman.cpp
        FrenchSwordsman.cpp
        FrenchArcher.cpp
        FrenchArtillery.cpp
        Swordsman.cpp
        Unit.cpp
)

add_library(game_units SHARED ${SOURCES})

install(TARGETS game_units
        LIBRARY DESTINATION lib
)
