#include "Cleric.h"

void Cleric::LevelUp() {
    setMaxHP(HPGROWTH + getMaxHP());
    increaseStats(STRGROWTH, INTGROWTH);
}
