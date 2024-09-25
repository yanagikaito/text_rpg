#include <cstdint>
typedef std::uint64_t exptype;
typedef std::uint64_t leveltype;
#ifndef LevelSystem_H
#define LevelSystem_H

class LevelSystem {
public:

    static const exptype LEVEL2AT = 100u;

    LevelSystem() {
        CurrentLevel = 1;
        CurrentEXP = 0u;
        LevelUpsAvailable = 0u;
        EXPToNextLevel = LEVEL2AT;

    }

    void gainEXP(exptype gained_exp) {
        CurrentEXP += gained_exp;
        while (check_if_leveled()) {}
    }

    leveltype getLevel() {
        return CurrentLevel;
    }

    exptype getCurrentEXP() {
        return CurrentEXP;
    }

    exptype getEXPToNextLevel() {
        return EXPToNextLevel;
    }

    virtual void LevelUp() = 0;

protected:
    leveltype CurrentLevel;

    // ���p�\�ȃ��x���A�b�v
    leveltype LevelUpsAvailable;

    // ���p�\�ȃ��x���A�b�v�ƌ��݂̃��x�����m�F����,�o���l���ǂ̂��炢�K�v���m�F�ł���
    exptype CurrentEXP;

    // ���̃��x���܂�xp�����
    exptype EXPToNextLevel;

    // ���݂̌o���l�����̌o���l���傫����
    bool check_if_leveled() {

        // 2��
        static const leveltype LEVELSCALAR = 2u;

        // ��C�Ƀ��x���オ�����ꍇtrue��Ԃ�����`�F�b�N�������邽��,
        // ���x���A�b�v�����ꍇ�͍ēx�`�F�b�N�����
        if (CurrentEXP >= EXPToNextLevel) {
            // ���x���A�b�v
            CurrentLevel++;
            LevelUp();
            EXPToNextLevel *= LEVELSCALAR;
            return true;
        }
        return false;
    }
};
#endif