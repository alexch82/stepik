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
	int n, cnt = 0;
	std::cin >> n;
	std::vector <int> a(n);
	for (int i = 0; i < n; i++)
		std::cin >> a[i];
	
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] == a[j])
				cnt++;
	
	std::cout << cnt;
	return 0;
}
