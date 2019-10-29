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
	int c1, r1, c2, r2;
	std::cin >> c1 >> r1 >> c2 >> r2;
	int c = (c2 - c1) * (c2 - c1);
	int r = (r2 - r1) * (r2 - r1);
	if (c == r || c1 == c2 || r1 == r2) std::cout << "YES";
	else std::cout << "NO";
	return 0;
}
