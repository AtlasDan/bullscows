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

    gameHeader();

    do {
        currentAttempt = 1;

        mainMenu();
        cin >> userMenuInput;

        if (userMenuInput == 1) {
            hiddenNum = getRandNum(minUserInputNum, maxUserInputNum);

            if (DEVELOP_MODE) {
                cout << endl << hiddenNum;
            }

            do {
                inputNumber(currentAttempt, maxAttempt);
                userNumInput = getUserNum(minUserInputNum, maxUserInputNum);

                if (userNumInput == 0) {
                    break;
                }

                if (!compareNumbers(hiddenNum, userNumInput)) {
                    currentAttempt++;
                    if (maxAttempt + 1 == currentAttempt) {
                        lostGame();
                        break;
                    }
                } else {
                    congratulate(hiddenNum);
                    break;
                }
            } while (true);
        } else if (userMenuInput == 0) {
            goodbye();
            break;
        } else {
            invalidInput();
        }
    } while (userMenuInput != 0);
}
