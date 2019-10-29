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
	int x, max = 0;
	do {
		std::cin >> x;
		max = x > max ? x : max;
	} while (x);
	std::cout << max;
	return 0;
}
