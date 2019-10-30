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
	int n;
	std::cin >> n;
	std::cout << (10 * ((n % 1000) / 100) + (n / 1000)) - (n % 100) + 1;
	return 0;
}
