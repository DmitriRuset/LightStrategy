#include "FranceFactory.h"
#include "../units/FrenchSwordsman.h"
#include "../units/FrenchArcher.h"
#include "../units/FrenchArtillery.h"

std::shared_ptr<Unit> FranceFactory::createSwordsman() {
    return std::make_shared<FrenchSwordsman>();
}

std::shared_ptr<Unit> FranceFactory::createArcher() {
    return std::make_shared<FrenchArcher>();
}

std::shared_ptr<Unit> FranceFactory::createArtillery() {
    return std::make_shared<FrenchArtillery>();
}
