#pragma once
#include <memory>
#include "../units/Swordsman.h"
#include "../units/Archer.h"
#include "../units/Artillery.h"

class UnitFactory {
public:
    virtual std::shared_ptr<Swordsman> createSwordsman() = 0;
    virtual std::shared_ptr<Archer> createArcher() = 0;
    virtual std::shared_ptr<Artillery> createArtillery() = 0;
    virtual ~UnitFactory() = default;
};
