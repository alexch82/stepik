/*
 * Решение задач курса "Введение в программирование С++"
 * 
 * [URL=https://stepik.org/course/363/promo]
 * 
 * Copyright 2019 Черноус Алексей <alexch82@ya.ru>
 * 
 */
#include <iostream>

int sum() {
    int n;
	if (std::cin >> n && n) return n + sum();
    return 0;
}

int main() {
	std::cout << sum();
	return 0;
}
