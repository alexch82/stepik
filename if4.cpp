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
	if ( (a + b) > c && (a + c) > b && (b + c) > a ) std::cout << "YES";
	else std::cout << "NO";
	return 0;
}
