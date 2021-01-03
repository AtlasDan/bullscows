#include "number.h"

/**
 * Генерация случайного числа в заданном диапазоне
 * @param min Минимальное число
 * @param max Максимальное число
 * @return Случайное число
 */
int getRandNum(int min, int max)
{
    return rand() * (1.0 / static_cast<double>(RAND_MAX + 1.0))
            * (max - min + 1)
            + min;
}

/**
 * Пользовательский ввод предпологаемого числа
 * @param minUserInputNum минимально возможное вводимое число
 * @param maxUserInputNum максимально возможное вводимое число
 * @return Число, предпологаемое пользователем
 */
int getUserNum(int minUserInputNum, int maxUserInputNum)
{
    int userNumInput;
    cin >> userNumInput;

    if (userNumInput == 0) {
        return userNumInput;
    }

    while ((userNumInput < minUserInputNum)
           || (userNumInput > maxUserInputNum)) {
        invalidAnswerInput(minUserInputNum, maxUserInputNum);
        cin >> userNumInput;
    }

    return userNumInput;
}

/**
 * Генерация вектора символов (цифр числа)
 * @param number Число
 * @return Вектор символов (цифр числа)
 */
vector<int> getNumSymbols(int number)
{
    vector<int> symbols;
    int numberLength = 0;

    while (number >= pow(10, numberLength)) {
        numberLength++;
    }

    for (int i = numberLength - 1; i >= 0; --i) {
        symbols.push_back((number / static_cast<int>(pow(10, i))) % 10);
    }

    return symbols;
}