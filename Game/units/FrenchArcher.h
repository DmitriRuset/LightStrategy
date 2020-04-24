#pragma once
#include "Archer.h"

class FrenchArcher : public Archer {
public:
    double damage() override;
    double hp() override;
    double armor() override;
    ~FrenchArcher() override = default;
};
