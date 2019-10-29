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
	int ss;
	std::cin >> ss;
	std::cout
		<< (ss / 3600) % 24 << ":"
		<< ((ss % 3600) / 60) / 10 << ((ss % 3600) / 60) %10 << ":"
		<< (ss % 60) / 10 << (ss % 60) % 10;
	return 0;
}
