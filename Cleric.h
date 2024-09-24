#include "Hp.h"
#include "Statblock.h"
#include "LevelSystem.h"
class Cleric :public Hp, public StatBlock, public LevelSystem {

public:
    static const hptype HPGROWTH = (hptype)14u;
    // �U��
    static const stattype BASESTR = (stattype)2u;
    static const stattype BASEINT = (stattype)3u;
    Cleric() : Hp(HPGROWTH, HPGROWTH), StatBlock(BASESTR, BASEINT) {}

    void putStatus() override {
        std::cout << "Cleric\n"
            << "-MaxHP:" << getMaxHP() << '\n'
            << "-Strength:" << getStrength() << '\n'
            << "-Intellect:" << getIntellect() << '\n';
    }
private:
};

