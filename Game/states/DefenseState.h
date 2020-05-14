#pragma once
#include "State.h"
#include "FightState.h"
#include "../composite/Squad.h"


class DefenseState : public State {
public:
    void Switch(Squad* squad) override;
    std::string getState() override;
};
