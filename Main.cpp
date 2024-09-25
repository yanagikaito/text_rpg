#include <iostream>
#include <stdlib.h>
#include "Allclasses.h"

int main() {

    /*  Warrior warr1;

      Wizard wiz1;*/

    Cleric cler1;

    /*  Rogue rog1;*/

      //warr1.putStatus();

      //wiz1.putStatus();

    for (int i = 0; i < 2; i++) {

        cler1.putStatus();

        if (i < 1)
            cler1.gainEXP(100u);
    }
    /* rog1.putStatus();*/

    return 0;
}