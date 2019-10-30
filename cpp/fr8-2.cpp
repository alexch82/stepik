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

int MinDivisor(int n) {
	if (n < 4) return n;
	return n / 2;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << MinDivisor(n);
  return 0;
}
