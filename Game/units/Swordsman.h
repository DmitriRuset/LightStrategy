#pragma once
#include "Unit.h"

class Swordsman : public virtual Unit {
public:
    int range() override {return 1;};
    virtual ~Swordsman() = default;
};