#ifndef BULLCOW_PRINTMENU_H
#define BULLCOW_PRINTMENU_H

#include <iostream>

using namespace std;

void mainMenu();
void gameHeader();
void gameOptionsMenu(int lengthNum, int maxAttempt);
void gameRules();
void gameCredits();
void invalidInput();
void goodbye();
void congratulate(int hiddenNum);
void replaceLengthNum();
void resultAttempt(int bulls, int cows);
void inputNumber(int currentAttempt, int maxAttempt);
void invalidAnswerInput(int min, int max);
void lostGame();
void replaceMaxAttempt();

#endif // BULLCOW_PRINTMENU_H
