/*
 * Решение задач курса "Введение в программирование С++"
 * 
 * [URL=https://stepik.org/course/363/promo]
 * 
 * Copyright 2019 Черноус Алексей <alexch82@ya.ru>
 * 
 */
#include <iostream>
#include <vector>

int main()
{
	int n = 0, k;
	std::vector <char> I(n);
	std::cin >> n >> k;
	for (int i = 0; i < n; i++)
		I.push_back('I');
    for (int i = 0; i < k; i++)
	{
        int a, b;
		std::cin >> a >> b;
		for (int j = a-1; j < b; j++)
			I[j] = '.';
	}
	for (int i = 0; i < n; i++)
		std::cout << I[i];
	return 0;
}
