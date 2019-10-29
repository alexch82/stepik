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
	int l = 0, m = 0, r = 0, k = 0, d = -1;
	std::cin >> r;
	while (r) {
		if (m > l && m > r && l) {
			if (d != -1)
				d = k < d || d == 0 ? k : d;
			else d = 0;
			k = 0;
		}
		k++;
		l = m;
		m = r;
		std::cin >> r;
	}
	if (d != -1) std::cout << d;
	else std::cout << 0;
	return 0;
}
