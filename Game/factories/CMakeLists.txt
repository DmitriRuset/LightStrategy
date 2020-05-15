cmake_minimum_required(VERSION 2.8)
project(GameFactories)

set(SOURCES UnitFactory.cpp EnglandFactory.cpp FranceFactory.cpp)

add_library(game_factories SHARED ${SOURCES})
target_link_libraries(game_factories game_units)

install(TARGETS game_factories
        LIBRARY DESTINATION lib
)
