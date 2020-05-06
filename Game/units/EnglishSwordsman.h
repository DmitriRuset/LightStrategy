#pragma once
#include "Swordsman.h"
#include "../configs/english_army/config_swordsman_eng.h"

class EnglishSwordsman : public Swordsman {
public:
    double damage() override;
    double hp() override;
    double armor() override;
    ~EnglishSwordsman() override = default;
};
