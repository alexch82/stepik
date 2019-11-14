/*
 * Решение задач курса "Введение в программирование С++"
 * 
 * [URL=https://stepik.org/course/363/promo]
 * 
 * Copyright 2019 Черноус Алексей <alexch82@ya.ru>
 * 
 */
#include <iostream>

int main()
{
	int a1, b1, c1, a2, b2, c2;
	std::cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	int x1 = -1, y1 = -1, z1 = -1, x2 = -1, y2 = -1, z2 = -1;
	if (a1 >= b1 && a1 >= c1) {
		x1 = a1;
		if (b1 >= c1) {
			y1 = b1;
			z1 = c1;
		} else {
			y1 = c1;
			z1 = b1;
		}
	} else if (b1 >= a1 && b1 >= c1) {
		x1 = b1;
		if (a1 >= c1) {
			y1 = a1;
			z1 = c1;
		} else {
			y1 = c1;
			z1 = a1;
		}
	} else {
		x1 = c1;
		if (a1 >= b1) {
			y1 = a1;
			z1 = b1;
		} else {
			y1 = b1;
			z1 = a1;
		}
	}
	
	if (a2 >= b2 && a2 >= c2) {
		x2 = a2;
		if (b2 >= c2) {
			y2 = b2;
			z2 = c2;
		} else {
			y2 = c2;
			z2 = b2;
		}
	} else if (b2 >= a2 && b2 >= c2) {
		x2 = b2;
		if (a2 >= c2) {
			y2 = a2;
			z2 = c2;
		} else {
			y2 = c2;
			z2 = a2;
		}
	} else {
		x2 = c2;
		if (a2 >= b2) {
			y2 = a2;
			z2 = b2;
		} else {
			y2 = b2;
			z2 = a2;
		}
	}
	if (x1 == x2 && y1 == y2 && z1 == z2)
		std::cout << "Boxes are equal";
	else if (x1 <= x2 && y1 <= y2 && z1 <= z2)
		std::cout << "The first box is smaller than the second one";
	else if (x1 >= x2 && y1 >= y2 && z1 >= z2)
		std::cout << "The first box is larger than the second one";
	else
		std::cout << "Boxes are incomparable";
	return 0;
}
