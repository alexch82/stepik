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
	double a, b, c, x1, x2;
	cin >> a >> b >> c;
	double D = b * b - 4 * a * c;
	cout << setprecision(12);
	if (D > 0) {
		x1 = (-b + pow(D, .5)) / (2 * a);
		x2 = (-b - pow(D, .5)) / (2 * a);
		if (x1 < x2)
			cout << x1 << " " << x2;
		else
			cout << x2 << " " << x1;
	} else if (D == 0)
		cout << -b / (2 * a);
	return 0;
}
