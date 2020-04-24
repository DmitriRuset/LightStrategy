cmake_minimum_required(VERSION 2.8)
project(Game)

set(CMAKE_CXX_STANDARD 17)

add_executable(Game main.cpp)
add_subdirectory(units)
add_subdirectory(factories)

set(ADDITIONAL_LIBRARIES game_units game_factories)

target_link_libraries(Game ${ADDITIONAL_LIBRARIES})
