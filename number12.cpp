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
	int v, t;
	std::cin >> v >> t;
	std::cout << (109 + (v * t) % 109) % 109;
	return 0;
}
