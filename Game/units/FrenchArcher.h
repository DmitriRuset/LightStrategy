#pragma once
#include "Archer.h"
#include "../configs/french_army/config_archer_fr.h"

class FrenchArcher : public Archer {
public:
    double damage() override;
    double hp() override;
    double armor() override;
    ~FrenchArcher() override = default;
};
