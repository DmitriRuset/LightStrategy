#pragma once
#include <memory>
#include "../units/Swordsman.h"
#include "../units/Archer.h"
#include "../units/Artillery.h"

class UnitFactory {
public:
    virtual std::shared_ptr<Unit> createSwordsman() = 0;
    virtual std::shared_ptr<Unit> createArcher() = 0;
    virtual std::shared_ptr<Unit> createArtillery() = 0;
    virtual ~UnitFactory() = default;
};
