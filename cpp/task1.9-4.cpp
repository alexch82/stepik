/*
 * Решение задач курса "Введение в программирование С++"
 * 
 * [URL=https://stepik.org/course/363/promo]
 * 
 * Copyright 2019 Черноус Алексей <alexch82@ya.ru>
 * 
 */
#include <iostream>
#include <cmath>

bool IsPointInSquare (double x, double y) {
	return fabs(y) + fabs(x) <= 1;
}

int main () {
    double x, y;
    std::cin >> x >> y;
    if (IsPointInSquare (x, y)) std::cout << "YES";
    else std::cout << "NO";
  return 0;
}
