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
	double a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	cout << setprecision(12);
	double D = a * d - c * b, dx = e * d - b * f, dy = a * f - c * e;
	if (D != 0) {
		cout << 2 << " " << dx / D << " " << dy / D;
	} else {
		if (dx == 0 && dy == 0) {
			if (a == 0 && b == 0 && c == 0 && d == 0) {
				if (e != 0 || f != 0) {
					cout << 0;
				} else {
					cout << 5;
				}
			} else {
				if (a == 0 && c == 0) {
					if (b != 0)
						cout << 4 << " " << e / b;
					else
						cout << 4 << " " << f / d;
				} else {
					if (b == 0 && d == 0) {
						if (a != 0)
							cout << 3 << " " << e / a;
						else
							cout << 3 << " " << f / c;
					} else {
						if (b != 0)
							cout << 1 << " " << -a / b << " " << e / b;
						else
							cout << 1 << " " << -c / d << " " << f / d;
					} 
				}
			}
		} else {
			cout << 0;
		}
	}
	return 0;
}
