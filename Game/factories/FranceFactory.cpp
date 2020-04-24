#include "FranceFactory.h"
#include "../units/FrenchSwordsman.h"
#include "../units/FrenchArcher.h"
#include "../units/FrenchArtillery.h"

std::shared_ptr<Swordsman> FranceFactory::createSwordsman() {
    return std::make_shared<FrenchSwordsman>();
}

std::shared_ptr<Archer> FranceFactory::createArcher() {
    return std::make_shared<FrenchArcher>();
}

std::shared_ptr<Artillery> FranceFactory::createArtillery() {
    return std::make_shared<FrenchArtillery>();
}