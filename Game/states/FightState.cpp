#include "FightState.h"

void FightState::Switch(Squad* squad) {
    squad->setState(std::make_unique<DefenseState>());
}

std::string FightState::getState() {
    return "Fighting!";
}