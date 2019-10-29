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
	int n, m, k;
	std::cin >> n >> m >> k;
	if (((k >= n) && (k % n == 0) && (k <= n * m)) ||
		((k >= m) && (k % m == 0) && (k <= n * m)) ||
		((k < n) && (k % m == 0)) ||
		((k < m) && (k % n == 0)))
		std::cout << "YES";
	else std::cout << "NO";
	return 0;
}
