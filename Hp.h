#include "hitpointtypes.h"

class Hp {

public:
    bool setmaxHP(hptype new_max_hp) {
        if (new_max_hp < 1) {
            return false;

            MaxHP = new_max_hp;

            if (CurrentHP > MaxHP) {
                CurrentHP = MaxHP;

                return true;
            }
        }
    }

private:

    hptype ShieldDefenseHP;

    hptype CurrentHP;

    // 32�r�b�g�̕����Ȃ������^�B
    hptype MaxHP;
};