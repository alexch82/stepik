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
	for (int i = 2; i <= round(sqrt(n)); i++)
		if (i <= n && n % i == 0) return i;
	return n;
}

int main() {
	int n;
	std::cin >> n;
	std::cout << MinDivisor(n);
	return 0;
}
