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
	int n;
	std::cin >> n;
	std::vector <int> a(n);	
	for (int i = 0; i < n; i++)
		std::cin >> a[i];

	long unsigned int i = 0;
	while (i < a.size()) {
		bool d = false;
		long unsigned int j = i + 1;
		while (j < a.size()) {
			if (a[i] == a[j]) {
				a.erase(a.begin() + j);
				d = true;
			}
			j++;
		}
		if (d) a.erase(a.begin() + i);
		else i++;
		
		for (auto x : a) std::cout << x << " ";
		std::cout << std::endl;
	}

	//for (auto x : a)
	//	std::cout << x << " ";
	return 0;
}
