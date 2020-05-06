#pragma once
#include "UnitFactory.h"

class FranceFactory : public UnitFactory {
public:
    std::shared_ptr<Unit> createSwordsman() override;
    std::shared_ptr<Unit> createArcher() override;
    std::shared_ptr<Unit> createArtillery() override;
    ~FranceFactory() override = default;
};
