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
	int a[100][100];
	int n, m;
	std::cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			std::cin >> a[i][j];
    int r = 0, c = 0, max = a[r][c];
    for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
				r = i;
				c = j;
			}
			if (a[i][j] == max)
			{
				if (i < r) r = i;
				if (i == r && j < c) c = j;
			}
		}
	std::cout << r << " " << c;
	return 0;
}
