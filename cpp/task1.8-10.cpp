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
	int a[30][30] = {};
	int n, m;
	std::cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
                        std::cout << std::setw(4);
			if (i % 2 == 0)
				std::cout << i * m + j + 1;
			else
				std::cout << i * m + m - j;
		}
	return 0;
}
