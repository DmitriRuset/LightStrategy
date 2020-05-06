#pragma once
#include "Artillery.h"
#include "../configs/english_army/config_artillery_eng.h"



class EnglishArtillery : public Artillery {
public:
    double damage() override;
    double hp() override;
    double armor() override;
    ~EnglishArtillery() override = default;
};
