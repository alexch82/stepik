/*
 * Решение задач курса "Введение в программирование С++"
 * 
 * [URL=https://stepik.org/course/363/promo]
 * 
 * Copyright 2019 Черноус Алексей <alexch82@ya.ru>
 * 
 */
#include <iostream>

bool IsPrime(int n) {
	if (n == 2) return true;
    return false;
}

int main() {
	int n;
	std::cin >> n;
	if (IsPrime(n)) std::cout << "YES";
	else std::cout << "NO";
	return 0;
}
