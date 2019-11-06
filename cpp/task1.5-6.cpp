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
	int x, sum = 0;
	do {
		std::cin >> x;
		sum += x;
	} while (x != 0);
	std::cout << sum;
	return 0;
}
