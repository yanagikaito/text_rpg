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

    // �_���[�W��
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

    // 32�r�b�g�̕����Ȃ������^�B
    hptype MaxHP;
};