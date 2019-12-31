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
	int a[20][20] = {};
	int n, m;
	std::cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			std::cin >> a[i][j];
	int k;
	std::cin >> k;
	int row = 21, d = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 0) {
				d = 0;
				while (j + d < m && a[i][j + d] == 0)
					d++;
			}
			if (d >= k && i < row)
				row = i;
		}
	if (row == 21) std::cout << 0;
	else std::cout << row + 1;
	return 0;
}
