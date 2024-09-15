#include "hitpointtypes.h"

class Hp {

private:

    hptype CurrentHP;

    // 32ビットの符号なし整数型。
    hptype MaxHP;

public:

    Hp() { CurrentHP = 1; MaxHP = 1; }

    Hp(hptype cHP, hptype mHP) :
        CurrentHP(cHP), MaxHP(mHP) {
        if (CurrentHP > MaxHP) CurrentHP = MaxHP;
    }

public:
    bool setmaxHP(hptype new_max_hp) {
        if (new_max_hp < 1)
            return false;

        MaxHP = new_max_hp;

        if (CurrentHP > MaxHP)
            CurrentHP = MaxHP;

        return true;
    }

    // ダメージ量
    void takeDamage(hptype damage) {
        if (damage > CurrentHP) {
            CurrentHP = 0;
            return;
        }

        CurrentHP -= damage;
    }

    void heal(hptype amount) {

        // 最大HPより量と現在のHPが大きい場合
        // 最大HPを超えての回復はできない。
        if (amount + CurrentHP > MaxHP) {
            CurrentHP = MaxHP;
            return;
        }

        // 現在のHPを回復する。
        CurrentHP += amount;
    }

    hptype getMaxHP() {
        return MaxHP;
    }

    hptype getCurrentHP() {
        return CurrentHP;
    }
};