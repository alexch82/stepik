/*
 * Решение задач курса "Введение в программирование С++"
 * 
 * [URL=https://stepik.org/course/363/promo]
 * 
 * Copyright 2019 Черноус Алексей <alexch82@ya.ru>
 * 
 */
#include <iostream>

int main()
{
	int a[100][100] = {};
	int n, m;
	std::cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			std::cin >> a[i][j];
	int i, j;
	std::cin >> i >> j;
	for (int k = 0; k < n; k++) {
		int t = a[k][i];
		a[k][i] = a[k][j];
		a[k][j] = t;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			std::cout << a[i][j] << " ";
		std::cout << std::endl;
	}
	return 0;
}
