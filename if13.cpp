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
	int min = a, mid = a, max = a;
	if (a <= b && a <= c) {
		min = a;
		if (b <= c) {
			mid = b;
			max = c;
		} else {
			mid = c;
			max = b;
		}
	} else if (b <= a && b <= c) {
		min = b;
		if (a <= c) {
			mid = a;
			max = c;
		} else {
			mid = c;
			max = a;
		}
	} else {
		min = c;
		if (a <= b) {
			mid = a;
			max = b;
		} else {
			mid = b;
			max = a;
		}
	}
	std::cout << min << " " << mid << " " << max;
	return 0;
}
