#include "Stattypes.h"
struct StatBlock {
    stattype Strength; // 0xFF
    stattype Intellect; // 0xFF
    // typeのキャスト
    StatBlock() {
        Strength = (stattype)1u;
        Intellect = (stattype)1u;
    }
    // explicit"=「暗黙的型変換」を防止する機能
    explicit StatBlock(stattype s, stattype i) :
        Strength(s), Intellect(i) {
    }
};
