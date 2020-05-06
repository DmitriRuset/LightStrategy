#pragma once
#include "UnitFactory.h"

class EnglandFactory : public UnitFactory {
public:
    std::shared_ptr<Unit> createSwordsman() override;
    std::shared_ptr<Unit> createArcher() override;
    std::shared_ptr<Unit> createArtillery() override;
    ~EnglandFactory() override = default;
};
