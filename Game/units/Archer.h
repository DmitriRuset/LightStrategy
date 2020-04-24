#pragma once
#include "Unit.h"

class Archer : public virtual Unit {
public:
    int range() override;
    virtual ~Archer() = default;
};