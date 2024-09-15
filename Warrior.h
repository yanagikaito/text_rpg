#include "Hp.h"
class Warrior :public Hp {

public:
    static const hptype HPGROWTH = 19u;
    Warrior() : Hp(HPGROWTH, HPGROWTH) {

    }
private:
};
