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
	int n, m, x, y, zx, zy, max, min;
	std::cin >> n >> m >> x >> y;
	if (n >= m) {
		max = n;
		min = m;
	} else {
		max = m;
		min = n;
	}
	if (min - x > x) 
		zx = x;
	else
		zx = min - x;
	if (max - y > y)
		zy = y;
	else
		zy = max - y;
	if (zx < zy) std::cout << zx;
	else std::cout << zy;
	return 0;
}
