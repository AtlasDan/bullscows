#include "game.h"

/**
 * Инициализация игры
 */
void game()
{
    srand(time(nullptr));

    int userMenuInput;
    int userNumInput;
    int currentAttempt;
    int hiddenNum;

    /******* Default game options *******/
    int maxAttempt = MAX_ATTEMPT;
    int lengthNum = LENGTH_NUM;
    int minUserInputNum = pow(10, lengthNum - 1);
    int maxUserInputNum = pow(10, lengthNum) - 1;
    /***********************************/
}
