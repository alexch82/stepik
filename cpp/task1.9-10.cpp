/*
 * Решение задач курса "Введение в программирование С++"
 * 
 * [URL=https://stepik.org/course/363/promo]
 * 
 * Copyright 2019 Черноус Алексей <alexch82@ya.ru>
 * 
 */
#include <iostream>

double MyPower(double x, unsigned int n) {
	if (n == 0) return 1;
	if (n == 1) return x;
	if (n % 2 == 0)
		return MyPower(x * x, n / 2);
	else
		return x * MyPower(abs(x), n - 1);
}

int main() {
    double a;
    unsigned int n;
    std::cin >> a >> n;
    std::cout << MyPower(a, n);
  return 0;
}
