#pragma once
#include "Archer.h"
#include "../configs/english_army/config_archer_eng.h"


class EnglishArcher : public Archer {
public:
    double damage() override;
    double hp() override;
    double armor() override;
    ~EnglishArcher() override = default;
};
