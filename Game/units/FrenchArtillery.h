#pragma once
#include "Artillery.h"

class FrenchArtillery : public Artillery {
public:
    double damage() override;
    double hp() override;
    double armor() override;
    ~FrenchArtillery() override = default;
};