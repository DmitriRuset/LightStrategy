#pragma once
#include "UnitFactory.h"

class FranceFactory : public UnitFactory {
public:
    std::shared_ptr<Swordsman> createSwordsman() override;
    std::shared_ptr<Archer> createArcher() override;
    std::shared_ptr<Artillery> createArtillery() override;
    ~FranceFactory() override = default;
};
