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
	int n, count = 0;
	do {
		std::cin >> n;
		count++;
	} while ( n );
	std::cout << --count;
	return 0;
}
