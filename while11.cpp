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
	int a, i = 0, f1 = 0, f2 = 0, f = 0;
	std::cin >> a;
	while ( f < a ) {
		f = f == 0 ? 1 : f1 + f2;
		f1 = f2;
		f2 = f;
		i++;
	}
	if (f == a) std::cout << i;
	else std::cout << -1;
	return 0;
}
