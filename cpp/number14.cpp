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
	int h, a, b;
	std::cin >> h >> a >> b;
	std::cout << (h - a + (a - b) - 1) / (a - b) + 1;
	return 0;
}
