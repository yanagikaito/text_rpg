#include "Stattypes.h"
#ifndef STATBLOCK_H
#define STATBLOCK_H

class StatBlock {
    stattype Strength; // 0xFF
    stattype Intellect; // 0xFF
    // type�̃L���X�g
public:
    StatBlock() {
        Strength = (stattype)1u;
        Intellect = (stattype)1u;
    }
    // explicit"=�u�ÖٓI�^�ϊ��v��h�~����@�\
    explicit StatBlock(stattype s, stattype i) :
        Strength(s), Intellect(i) {
    }
    stattype getStrength() { return Strength; }
    stattype getIntellect() { return Intellect; }
};
#endif // STATBLOCK_H