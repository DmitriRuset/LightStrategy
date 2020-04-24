#pragma once
#include "Unit.h"

class Artillery : public virtual Unit {
public:
    int range() override {return 3;};
    virtual ~Artillery() = default;
};