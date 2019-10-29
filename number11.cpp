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
	int h1, m1, s1, h2, m2, s2;
	std::cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
	std::cout << (h2 * 3600 + m2 * 60 + s2) - (h1 * 3600 + m1 * 60 + s1);
	return 0;
}
