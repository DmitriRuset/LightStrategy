#include <iostream>
#include <string>
#include <memory>
#include "composite/Squad.h"
#include "factories/UnitFactory.h"
#include "factories/EnglandFactory.h"
#include "factories/FranceFactory.h"
#include "configs/config.h"


int main() {
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
        std::cout << "Incorrect name of country!\n";
        return 0;
    }

    size_t squad_amount;
    std::cout << "You can create an army. How many squads would you like to have, my lord?\n";
    std::cin >> squad_amount;
    std::cout << "You have " << squad_amount << " squads, my lord.\n";
    std::cout << "There is a list of available units, sir:\n";
    for (auto& unit : units) {
        std::cout << unit << " ";
    }
    std::cout << "\n";

    std::vector<Squad> army(squad_amount);

    for (size_t i = 0; i < squad_amount; ++i) {
        std::cout << "What units would you like to see in squad " << i+1 << ", sir?\n";
        std::cout << "Hint: Write 'enough' to stop adding units.\n";
        while(true) {
            std::string name_unit;
            std::cin >> name_unit;
            if (name_unit == "enough") {
                std::cout << "Squad " << i + 1 << " is ready!\n";
                break;
            }
            std::shared_ptr<Unit> unit;
            if (name_unit == "swordsman") {
                unit = factory->createSwordsman();
            } else if (name_unit == "archer") {
                unit = factory->createArcher();
            } else if (name_unit == "artillery") {
                unit = factory->createArtillery();
            } else {
                std::cout << "Incorrect name of unit\n";
                continue;
            }
            army[i].add(unit);
        }
    }
    size_t num_of_squad = 0;
    for (auto& squad : army) {
        num_of_squad++;
        std::cout << "HP of your squad " << num_of_squad << ": " << squad.hp() << '\n';
        std::cout << "Armor of your squad " << num_of_squad << ": " << squad.armor() << '\n';
        std::cout << "Damage of your squad " << num_of_squad << ": " << squad.damage() << '\n';
    }

    std::cout << "Would you like to test readiness of your army? Write 'change 1' to change squad 1 state.\n";
    std::cout << "Write 'enough' to stop testing.\n";

    while(true) {
        std::string state;
        size_t squad_num;
        std::cin >> state;
        if (state == "enough") {
            break;
        }
        std::cin >> squad_num;
        squad_num--;
        army[squad_num].changeState();
        std::cout << "Squad " << squad_num+1 << " is:\n";
        army[squad_num].printState();
    }




    return 0;
}
