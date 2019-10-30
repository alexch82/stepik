/*
 * Решение задач курса "Введение в программирование С++"
 * 
 * [URL=https://stepik.org/course/363/promo]
 * 
 * Copyright 2019 Черноус Алексей <alexch82@ya.ru>
 * 
 */
#include <iostream>

double power(double a, int n) {
    if (n == 0) return 1;
    if (n > 0) return a * power(a, n - 1);
    else return 1 / (a * power(a, -n - 1));
}

int main() {
	int n;
	double a;
	std::cin >> a >> n;
	std::cout << power(a, n);
	return 0;
}
