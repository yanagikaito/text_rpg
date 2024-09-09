#include "hitpointtypes.h"

class Hp {

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

private:

    hptype ShieldDefenseHP;

    hptype CurrentHP;

    // 32ビットの符号なし整数型。
    hptype MaxHP;
};