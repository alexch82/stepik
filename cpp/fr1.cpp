/*
 * Решение задач курса "Введение в программирование С++"
 * 
 * [URL=https://stepik.org/course/363/promo]
 * 
 * Copyright 2019 Черноус Алексей <alexch82@ya.ru>
 * 
 */
#include <iostream>

int min (int a, int b) {
	if (a < b) return a;
	else return b;
}

int min4 (int a, int b, int c, int d) {
	return min(min(a, b), min(c, d));
}

int main () {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << min4(a, b, c, d);
  return 0;
}
