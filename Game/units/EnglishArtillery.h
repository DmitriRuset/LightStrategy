#pragma once
#include "Artillery.h"


class EnglishArtillery : public Artillery {
public:
    double damage() override;
    double hp() override;
    double armor() override;
    ~EnglishArtillery() override = default;
};