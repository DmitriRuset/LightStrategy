cmake_minimum_required(VERSION 2.8)
project(Game)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES composite/Squad.cpp states/DefenseState.cpp states/FightState.cpp states/State.cpp states/DefenseState.h states/FightState.h states/State.h)
add_executable(Game main.cpp ${SOURCES})
add_subdirectory(units)
add_subdirectory(factories)

set(ADDITIONAL_LIBRARIES game_units game_factories)

target_include_directories(Game PRIVATE composite)
target_link_libraries(Game ${ADDITIONAL_LIBRARIES})
