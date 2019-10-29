/*
 * Решение задач курса "Введение в программирование С++"
 * 
 * [URL=https://stepik.org/course/363/promo]
 * 
 * Copyright 2019 Черноус Алексей <alexch82@ya.ru>
 * 
 */
#include <iostream>

int main() {
	int x, p = 0, k = 1, max = 1;
	do {
		std::cin >> x;
		k = x == p ? k + 1 : 1;
		max = k > max ? k : max;
		p = x;
	} while ( x );
	std::cout << max;
	return 0;
}
