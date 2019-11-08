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

int main() {
	int n, t;
	std::cin >> n;
	std::vector <int> a(n);
	for (int i = 0; i < n; i++)
		std::cin >> a[i];
	t = a[n - 1];
	for (int i = n - 1; i > 0; i--)
		a[i] = a[i-1];
	a[0] = t;
	for (auto x : a) std::cout << x << " ";
	return 0;
}
