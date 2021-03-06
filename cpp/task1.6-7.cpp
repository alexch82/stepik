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
#include <iomanip>
using namespace std;

int main() {
	int x, n = 0;
	double s = 0.0, s2 = 0.0;
	while ((cin >> x) && (x != 0)) {
		s += x;
		s2 += x*x;
		n++;
	}
	cout << setprecision(12);
	cout << pow((s2 - pow(s, 2) / n) / (n - 1),.5);	
	return 0;
}
