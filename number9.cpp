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
	int a, b, n, r, c;
	std::cin >> a >> b >> n;
	std::cout << n * a + (b * n) / 100 << " " << (b * n) % 100;
	return 0;
}
