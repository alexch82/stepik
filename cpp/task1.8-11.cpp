/*
 * Решение задач курса "Введение в программирование С++"
 * 
 * [URL=https://stepik.org/course/363/promo]
 * 
 * Copyright 2019 Черноус Алексей <alexch82@ya.ru>
 * 
 */
#include <iostream>
#include <iomanip>

int main()
{
	int a[100][100] = {};
	int n, m;
	std::cin >> n >> m;
	int i = 0, j = 0, k = 1;
	while (k <= n * m) {
		a[i][j] = k;
		if (n >= m) {
			if (j == 0) {
				j = i + 1;
				i = 0;
			}
		} else {
			if (i + 1 >= n) {
				j = j + i + 1;
				i = 0;
			}
		}
		i++;
		j--;
		k++;
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			std::cout << std::setw(4);
			std::cout << a[i][j];
		}
		std::cout << std::endl;
	}
	return 0;
}
