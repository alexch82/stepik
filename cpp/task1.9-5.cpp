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

bool IsPointInCircle (double x, double y, double xc, double yc, double r) {
	return pow(x - xc,2) + pow(y - yc,2) <= pow(r,2);
}

int main () {
    double x, y, xc, yc, r;
    std::cin >> x >> y >> xc >> yc >> r;
    if (IsPointInCircle (x, y, xc, yc, r)) std::cout << "YES";
    else std::cout << "NO";
  return 0;
}
