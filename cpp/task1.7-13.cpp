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
	int q[8][2] = {};
	for (int i = 0; i < 8; i++)
		std::cin >> q[i][0] >> q[i][1];
	bool b = false;
	for (int i = 0; i < 7; i++)
		for (int j = i + 1; j < 8; j++)
		{
			if (q[i][0] == q[j][0] ||
				q[i][1] == q[j][1] ||
				(abs(q[i][0] - q[j][0]) == abs(q[i][1] - q[j][1])))
			{
				b = true;
				break;
			}
		}
	if (b)
		std::cout << "YES";
	else
		std::cout << "NO";
	return 0;
}
