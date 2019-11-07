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
	cout << dx / D << " " << dy / D;
	return 0;
}
