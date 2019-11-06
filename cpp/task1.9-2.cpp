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

double distance (double x1, double y1, double x2, double y2) {
	return pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), .5);
}

int main () {
	double x1, y1, x2, y2;
	std::cin >> x1 >> y1 >> x2 >> y2;
	std::cout << distance (x1, y1, x2, y2);
	return 0;
}
