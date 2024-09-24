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

    // 利用可能なレベルアップ
    leveltype LevelUpsAvailable;

    // 利用可能なレベルアップと現在のレベルを確認して,経験値がどのくらい必要か確認できる
    exptype CurrentEXP;

    void check_if_leveled() {

        // 2乗
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