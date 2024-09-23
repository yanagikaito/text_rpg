#include <iostream>
#include <stdlib.h>
#include "Allclasses.h"

int main() {

    Warrior warr1;

    Wizard wiz1;

    Cleric cler1;

    Rogue rog1;

    std::cout << "Warrior\n"
        << "-MaxHP:" << warr1.getMaxHP() << '\n'
        << "-Strength:" << warr1.getStrength() << '\n'
        << "-Intellect:" << warr1.getIntellect() << '\n';

    std::cout << "Wizard\n"
        << "-MaxHP:" << wiz1.getMaxHP() << '\n'
        << "-Strength:" << wiz1.getStrength() << '\n'
        << "-Intellect:" << wiz1.getIntellect() << '\n';

    std::cout << "Cleric\n"
        << "-MaxHP:" << cler1.getMaxHP() << '\n'
        << "-Strength:" << cler1.getStrength() << '\n'
        << "-Intellect:" << cler1.getIntellect() << '\n';

    std::cout << "Rogue\n"
        << "-MaxHP:" << rog1.getMaxHP() << '\n'
        << "-Strength:" << rog1.getStrength() << '\n'
        << "-Intellect:" << rog1.getIntellect() << '\n';

    return 0;
}