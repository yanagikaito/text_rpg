#include <cstdint>
typedef std::uint64_t exptype;
typedef std::uint64_t leveltype;
#ifndef LevelSystem_H
#define LevelSystem_H

class LevelSystem {
public:

    LevelSystem() {
        CurrentLevel = 1;
        CurrentEXP = 0u;
        LevelUpsAvailable = 0u;
    }

    void gainEXP(std::uint64_t gained_exp) {
        CurrentEXP = gained_exp;
        check_if_leveled();
    }

protected:
    leveltype CurrentLevel;

    // ���p�\�ȃ��x���A�b�v
    leveltype LevelUpsAvailable;

    // ���p�\�ȃ��x���A�b�v�ƌ��݂̃��x�����m�F����,�o���l���ǂ̂��炢�K�v���m�F�ł���
    exptype CurrentEXP;

    void check_if_leveled() {

        // 2��
        static const leveltype LEVELSCALAR = 2u;
        static const exptype level2AT = 100;
        leveltype current_equivent_level = CurrentLevel + LevelUpsAvailable;

        // 1 = 0xp needed
        // 2 = level2at exp needd
        // 3 = prev_required * LEVELSCALAR exp needed
        // 4 = prev_required * LEVELSCALAR exp needed
    }
};
#endif