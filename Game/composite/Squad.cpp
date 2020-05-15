#include "Squad.h"

double Squad::hp() {
    double hp_squad = 0;
    for (auto& unit: units) {
        hp_squad += unit->hp();
    }
    return hp_squad;
}

double Squad::armor() {
    double armor_squad = 0;
    for (auto& unit: units) {
        armor_squad += unit->armor();
    }
    return armor_squad;
}

void Squad::add(std::shared_ptr<Unit> unit) {
    units.push_back(unit);
}

void Squad::printState() {
    std::cout << "State is: " << state_->getState() << std::endl;
}

void Squad::setState(StatePointer state) {
    state_ = std::move(state);
}

void Squad::changeState() {
    state_->Switch(this);
}

double Squad::damage() {
    double damage_squad = 0;
    for (auto& unit: units) {
        damage_squad += unit->damage();
    }
    return damage_squad;
}

Squad::Squad() {
    state_ = std::make_unique<DefenseState>();
}
