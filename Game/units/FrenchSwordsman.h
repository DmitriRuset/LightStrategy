#pragma once
#include "Swordsman.h"
#include "../configs/french_army/config_swordsman_fr.h"


class FrenchSwordsman : public Swordsman {
public:
    double damage() override;
    double hp() override;
    double armor() override;
    ~FrenchSwordsman() override = default;
};
