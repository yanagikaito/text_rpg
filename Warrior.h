#include "Hp.h"
#include "Statblock.h"
class Warrior :public Hp, public StatBlock {

public:
    static const hptype HPGROWTH = (hptype)19u;
    // çUåÇ
    static const stattype BASESTR = (stattype)4u;
    static const stattype BASEINT = (stattype)1u;
    Warrior() : Hp(HPGROWTH, HPGROWTH), StatBlock(BASESTR, BASEINT) {

    }
private:
};
