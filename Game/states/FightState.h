#pragma once
#include "State.h"
#include "DefenseState.h"
#include "../composite/Squad.h"

class FightState : public State {
public:
    void Switch(Squad* squad) override;
    std::string getState() override;
};