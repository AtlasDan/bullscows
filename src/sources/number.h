#ifndef BULLCOW_NUMBER_H
#define BULLCOW_NUMBER_H

#include <cmath>
#include <ctime>
#include <iostream>
#include <vector>

#include "message.h"

using namespace std;

int getRandNum(int min, int max);
int getUserNum(int minUserInputNum, int maxUserInputNum);
vector<int> getNumSymbols(int number);
bool compareNumbers(int hiddenNum, int userNumInput);

#endif // BULLCOW_NUMBER_H
