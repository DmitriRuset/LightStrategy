#pragma once
#include "Archer.h"

class EnglishArcher : public Archer {
public:
    double damage() override;
    double hp() override;
    double armor() override;
    ~EnglishArcher() override = default;
};