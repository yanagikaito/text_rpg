#include "Stattypes.h"
struct StatBlock {
    stattype Strength; // 0xFF
    stattype Intellect; // 0xFF
    // type�̃L���X�g
    StatBlock() {
        Strength = (stattype)1u;
        Intellect = (stattype)1u;
    }
    // explicit"=�u�ÖٓI�^�ϊ��v��h�~����@�\
    explicit StatBlock(stattype s, stattype i) :
        Strength(s), Intellect(i) {
    }
};
