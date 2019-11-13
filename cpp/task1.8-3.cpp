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
			a[i][j] = abs(j - i);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			std::cout << a[i][j] << " ";
		std::cout << std::endl;
	}
	return 0;
}
