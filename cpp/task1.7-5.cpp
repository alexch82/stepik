/*
 * Решение задач курса "Введение в программирование С++"
 * 
 * [URL=https://stepik.org/course/363/promo]
 * 
 * Copyright 2019 Черноус Алексей <alexch82@ya.ru>
 * 
 */
#include <iostream>
#include <vector>

int main() {
	int n;
	std::cin >> n;
	std::vector <int> a(n);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
		if (a[i] * a[i-1] > 0 && i) {
			if (a[i-1] > a[i]) std::cout << a[i] << " " << a[i-1];
			else std::cout << a[i-1] << " " << a[i];
			break;
		}
	}
	return 0;
}
