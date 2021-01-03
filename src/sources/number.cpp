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