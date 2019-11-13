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
	char a[100][100];
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = '.';
    for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (i == j || i == n / 2 || j == n / 2 || i + j == n - 1)
				a[i][j] = '*';
		}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			std::cout << a[i][j] << " ";
		std::cout << std::endl;
	}
	return 0;
}
