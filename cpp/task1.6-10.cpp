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
	cout << setprecision(12);
	if (a == 0 && b == 0 && c == 0)
		cout << 3;
	else if (a == 0) {
		if (b)
			cout << 1 << " " << -c / b;
		else
			cout << 0;
	} else {
		double D = b * b - 4 * a * c;
		if (D > 0) {
			x1 = (-b + pow(D, .5)) / (2 * a);
			x2 = (-b - pow(D, .5)) / (2 * a);
			cout << 2 << " ";
			if (x1 < x2)
				cout << x1 << " " << x2;
			else
				cout << x2 << " " << x1;
		} else if (D == 0)
			cout << 1 << " " << -b / (2 * a);
		else
			cout << 0;
	}
	return 0;
}
