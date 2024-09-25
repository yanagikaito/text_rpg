#include "Hp.h"
#include "Statblock.h"
#include "LevelSystem.h"
#include <iostream>
class Cleric :public Hp, public StatBlock, public LevelSystem {

public:
    static const hptype BASEHP = (hptype)14u;
    // çUåÇ
    static const stattype BASESTR = (stattype)2u;
    static const stattype BASEINT = (stattype)3u;

    static const hptype HPGROWTH = (hptype)7u;
    static const stattype STRGROWTH = (stattype)1u;
    static const stattype INTGROWTH = (stattype)2u;

    Cleric() : Hp(HPGROWTH, HPGROWTH), StatBlock(BASESTR, BASEINT) {}

    void putStatus() override {
        std::cout << "Cleric Level " << getLevel() << '\n'
            << "-MaxHP:" << getMaxHP() << '\n'
            << "-Strength:" << getStrength() << '\n'
            << "-Intellect:" << getIntellect() << '\n'
            << "-EXP: " << getCurrentEXP() <<
            " / " << getEXPToNextLevel() << '\n';

    }
private:

    // LevelSystem ÇâÓÇµÇƒåpè≥Ç≥ÇÍÇ‹ÇµÇΩ
    void LevelUp() override;
};