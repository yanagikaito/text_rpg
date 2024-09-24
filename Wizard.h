#include "Hp.h"
#include "Statblock.h"
class Wizard :public Hp, public StatBlock {

public:
    static const hptype HPGROWTH = (hptype)9u;
    // çUåÇ
    static const stattype BASESTR = (stattype)1u;
    static const stattype BASEINT = (stattype)4u;
    Wizard() : Hp(HPGROWTH, HPGROWTH), StatBlock(BASESTR, BASEINT) {}

    void putStatus() override {
        std::cout << "Wizard\n"
            << "-MaxHP:" << getMaxHP() << '\n'
            << "-Strength:" << getStrength() << '\n'
            << "-Intellect:" << getIntellect() << '\n';
    }
private:
};