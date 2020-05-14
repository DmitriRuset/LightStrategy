#pragma once
#include "Artillery.h"
#include "../configs/french_army/config_artillery_fr.h"

class FrenchArtillery : public Artillery {
public:
    double damage() override;
    double hp() override;
    double armor() override;
    ~FrenchArtillery() override = default;
};
