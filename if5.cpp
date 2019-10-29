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
	int a, b, c;
	std::cin >> a >> b >> c;
	if (a == b && a == c) std::cout << 3;
	else if (a == b || a == c || b == c) std::cout << 2;
	else std::cout << 0;
	return 0;
}
