/*
 * Решение задач курса "Введение в программирование С++"
 * 
 * [URL=https://stepik.org/course/363/promo]
 * 
 * Copyright 2019 Черноус Алексей <alexch82@ya.ru>
 * 
 */
#include <iostream>
#include <cmath>

int IsPrime(int n) {
	for (int i = 2; i <= round(sqrt(n)); i++)
		if (n % i == 0) return false;
	return true;
}

int main() {
    int n;
    std::cin >> n;
    if (IsPrime(n))
		std::cout << "YES";
	else
		std::cout << "NO";
  return 0;
}
