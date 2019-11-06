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
	int n, i = 2;
	std::cin >> n;
	while ( n % i ) i++;
	std::cout << i;
	return 0;
}
