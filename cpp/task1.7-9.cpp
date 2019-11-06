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
	int b[n][t] = {};
	std::vector <int> a(n);
	for (int i = 0; i < n; i++)
		std::cin >> a[i];
	n = n % 2 ? n - 1 : n;
	for (int i = 0; i < n-1; i += 2) {
		t = a[i];
		a[i] = a[i+1];
		a[i+1] = t;
	}
	for (auto x : a) std::cout << x << " ";
	return 0;
}
