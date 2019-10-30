/*
 * Решение задач курса "Введение в программирование С++"
 * 
 * [URL=https://stepik.org/course/363/promo]
 * 
 * Copyright 2019 Черноус Алексей <alexch82@ya.ru>
 * 
 */
#include <iostream>

int main (int argc, char** argv)
{
	int n, i = 1;
	std::cin >> n;
	while ( i < n ) i <<= 1;
	if (i == n) std::cout << "YES";
	else std::cout << "NO";
	return 0;
}
