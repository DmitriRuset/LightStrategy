#pragma once
#include "Swordsman.h"

class FrenchSwordsman : public Swordsman {
public:
    double damage() override;
    double hp() override;
    double armor() override;
    ~FrenchSwordsman() override = default;
};