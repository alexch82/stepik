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
	int n;
	double x, a = 0, p = 0;
	cin >> n >> x >> a;
	p = a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		p = p*x + a;
	}
	cout << setprecision(12);
	cout << p;	
	return 0;
}
