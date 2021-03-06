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
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			std::cin >> a[i][j];
	int k;
	std::cin >> k;
	if (k >= 0)
		for (int i = k, j = 0; i < n; i++, j++)
			std::cout << a[i][j] << " ";
	else
		for (int i = 0, j = -k; j < n; i++, j++)
			std::cout << a[i][j] << " ";
	return 0;
}
