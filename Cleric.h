#include "Hp.h"
#include "Statblock.h"
class Cleric :public Hp, public StatBlock {

public:
    static const hptype HPGROWTH = (hptype)14u;
    // çUåÇ
    static const stattype BASESTR = (stattype)2u;
    static const stattype BASEINT = (stattype)3u;
    Cleric() : Hp(HPGROWTH, HPGROWTH), StatBlock(BASESTR, BASEINT) {

    }
private:
};

