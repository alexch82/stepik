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
	bool sym = true;
	for (int i = 0; i < n; i++)
		for (int j = i; j < n; j++)
			if (a[i][j] != a[j][i]) {
				sym = false;
				break;
			};
	if (sym)
		std::cout << "YES";
	else
		std::cout << "NO";
	return 0;
}
