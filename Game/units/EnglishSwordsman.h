#pragma once
#include "Swordsman.h"

class EnglishSwordsman : public Swordsman {
public:
    double damage() override;
    double hp() override;
    double armor() override;
    ~EnglishSwordsman() override = default;
};