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
	int p, x, y;
	double z;
	cin >> p >> x >> y;
	cout << setprecision(6);
	z = (x * 100 + y) + ((x * 100 + y) * p) / 100.0;
	cout << trunc(z / 100.0) << " " << int(trunc(z)) % 100;
	return 0;
}
