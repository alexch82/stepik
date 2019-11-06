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
	int p, x, y, k;
	double z;
	cin >> p >> x >> y >> k;
	cout << setprecision(6);
	for (int i = 1; i <= k; i++) {
		z = (x * 100 + y) + ((x * 100 + y) * p) / 100.0;
		x = int(trunc(z / 100.0));
		y = int(trunc(z)) % 100;
	}
	cout << trunc(z / 100.0) << " " << int(trunc(z)) % 100;	
	return 0;
}
