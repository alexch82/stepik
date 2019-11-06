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
	double avr = 0.0, sigma = 0.0;
	while ((cin >> x) && (x != 0)) {
		avr += x;
		n++;
	}
	cout << setprecision(12);
	cout << avr / n;	
	return 0;
}
