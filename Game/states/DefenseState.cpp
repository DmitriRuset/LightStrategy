#include "DefenseState.h"

void DefenseState::Switch(Squad* squad) {
    squad->setState(std::make_unique<FightState>());
}

std::string DefenseState::getState() {
    return "Defensing!";
}
