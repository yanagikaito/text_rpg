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

    void heal(hptype amount) {

        // �ő�HP���ʂƌ��݂�HP���傫���ꍇ
        // �ő�HP�𒴂��Ẳ񕜂͂ł��Ȃ��B
        if (amount + CurrentHP > MaxHP) {
            CurrentHP = MaxHP;
            return;
        }

        // ���݂�HP���񕜂���B
        CurrentHP += amount;
    }

    hptype getMaxHP() {
        return MaxHP;
    }

    hptype getCurrentHP() {
        return CurrentHP;
    }

private:

    hptype ShieldDefenseHP;

    hptype CurrentHP;

    // 32�r�b�g�̕����Ȃ������^�B
    hptype MaxHP;
};