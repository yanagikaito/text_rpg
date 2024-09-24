#include "Hp.h"
#include "Statblock.h"
class Rogue :public Hp, public StatBlock {

public:
    static const hptype HPGROWTH = (hptype)13u;
    // çUåÇ
    static const stattype BASESTR = (stattype)3u;
    static const stattype BASEINT = (stattype)2u;
    Rogue() : Hp(HPGROWTH, HPGROWTH), StatBlock(BASESTR, BASEINT) {}

    void putStatus() override {
        std::cout << "Rogue\n"
            << "-MaxHP:" << getMaxHP() << '\n'
            << "-Strength:" << getStrength() << '\n'
            << "-Intellect:" << getIntellect() << '\n';
    }
private:
};

