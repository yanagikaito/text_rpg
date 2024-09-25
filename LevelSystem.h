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

    // 利用可能なレベルアップ
    leveltype LevelUpsAvailable;

    // 利用可能なレベルアップと現在のレベルを確認して,経験値がどのくらい必要か確認できる
    exptype CurrentEXP;

    // 次のレベルまでxpを入力
    exptype EXPToNextLevel;

    // 現在の経験値が次の経験値より大きいか
    bool check_if_leveled() {

        // 2乗
        static const leveltype LEVELSCALAR = 2u;

        // 一気にレベル上がった場合trueを返す限りチェックし続けるため,
        // レベルアップした場合は再度チェックされる
        if (CurrentEXP >= EXPToNextLevel) {
            // レベルアップ
            CurrentLevel++;
            LevelUp();
            EXPToNextLevel *= LEVELSCALAR;
            return true;
        }
        return false;
    }
};
#endif