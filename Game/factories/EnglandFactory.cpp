#include "EnglandFactory.h"
#include "../units/EnglishSwordsman.h"
#include "../units/EnglishArcher.h"
#include "../units/EnglishArtillery.h"


std::shared_ptr<Unit> EnglandFactory::createSwordsman() {
    return std::make_shared<EnglishSwordsman>();
}

std::shared_ptr<Unit> EnglandFactory::createArcher() {
    return std::make_shared<EnglishArcher>();
}

std::shared_ptr<Unit> EnglandFactory::createArtillery() {
    return std::make_shared<EnglishArtillery>();
}
