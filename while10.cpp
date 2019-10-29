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
	int n, a = 0, b = 0, f = 0;
	std::cin >> n;
	while (n) {
		f = f == 0 ? 1 : a + b;
		a = b;
		b = f;
		n--;
	}
	std::cout << f;
	return 0;
}
