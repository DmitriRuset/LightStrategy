#pragma once

#include "../units/Unit.h"
#include <vector>
#include <memory>
#include <iostream>
#include <cstddef>
#include "../states/State.h"
#include "../states/DefenseState.h"

using StatePointer = std::unique_ptr<State>;

class Squad : public Unit {
public:
    Squad();
    void setState(StatePointer state);
    void printState();
    void changeState();
    double hp() override;
    double armor() override;
    double damage() override;
    void add(std::shared_ptr<Unit> unit);
    ~Squad() = default;
private:
    StatePointer state_;
    std::vector<std::shared_ptr<Unit>> units;
};

