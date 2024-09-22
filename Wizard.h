#include "Hp.h"
#include "Statblock.h"
class Wizard :public Hp, public StatBlock {

public:
    static const hptype HPGROWTH = (hptype)9u;
    // �U��
    static const stattype BASESTR = (stattype)1u;
    static const stattype BASEINT = (stattype)4u;
    Wizard() : Hp(HPGROWTH, HPGROWTH), StatBlock(BASESTR, BASEINT) {

    }
private:
};