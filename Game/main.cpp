#include <iostream>
#include <set>
#include <string>
#include <memory>
#include "factories/UnitFactory.h"
#include "factories/EnglandFactory.h"
#include "factories/FranceFactory.h"


int main() {
    std::set<std::string> names_of_sides = {"England", "France"};
    std::cout << "This is a console game! Please write answers in console)\n";
    std::cout << "Please, choose your side!\n";
    std::cout << "Available: ";
    for (auto& nation : names_of_sides) {
        std::cout << nation << " ";
    }
    std::cout << '\n';

    std::string chosen_nation;
    std::cin >> chosen_nation;
    std::shared_ptr<UnitFactory> factory;
    if (chosen_nation == "England") {
        factory = std::make_shared<EnglandFactory>();
    } else if (chosen_nation == "France") {
        factory = std::make_shared<FranceFactory>();
    } else {
        std::cout << "Incorrect name of country!";
        return 0;
    }

    std::set<std::string> units = {"swordsman", "archer", "artillery"};
    
    size_t amount;
    std::cout << "You can create an army. You can choose up to ";
    std::cin >> amount;	   
    std::cout << " units.\n";
    std::cout << "Available:\n";
    for (auto& unit : units) {
        std::cout << unit << "\n";
    }

    std::multiset<std::shared_ptr<Unit>> army;

    for (size_t i = 0; i < amount; ++i) {
        std::string chosen_unit;
        std::cin >> chosen_unit;
        std::shared_ptr<Unit> unit;
        if (chosen_unit == "swordsman") {
            unit = factory->createSwordsman();
            army.insert(unit);
        } else if (chosen_unit == "archer") {
            unit = factory->createArcher();
            army.insert(unit);
        } else if (chosen_unit == "artillery") {
            unit = factory->createArtillery();
            army.insert(unit);
        } else {
            std::cout << "Incorrect name of unit";
        }
    }

    for (auto& item : army) {
        std::cout << item->hp() << " " << item->damage() << "\n";
    }
    return 0;
}
