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
	int a[1000][1000] = {};
	int n, m;
	std::cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			std::cin >> a[i][j];
	for (int i = 0; i < m; i++) {
		for (int j = n - 1; j > -1; j--)
			std::cout << a[j][i] << " ";
		std::cout << std::endl;
	}
	return 0;
}
