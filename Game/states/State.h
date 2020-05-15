#pragma once

#include <string>

class Squad;

class FightState;
class DefenseState;


class State {
public:
    virtual void Switch(Squad* squad) = 0;
    virtual std::string getState() = 0;
};
