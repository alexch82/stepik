/*
 * Решение задач курса "Введение в программирование С++"
 * 
 * [URL=https://stepik.org/course/363/promo]
 * 
 * Copyright 2019 Черноус Алексей <alexch82@ya.ru>
 * 
 */
#include <iostream>

bool IsPointInSquare (double x, double y) {
	return (-1 - y <= x && x <= 1 - y && y - 1 <= x && y + 1) && (-x - 1 <= y && -1 + x <= y && y <= 1 - x && y <= 1 + x);
}

int main () {
    double x, y;
    std::cin >> x >> y;
    if (IsPointInSquare (x, y)) std::cout << "YES";
    else std::cout << "NO";
  return 0;
}
