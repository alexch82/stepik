#include <iostream>

bool IsPointInSquare (double x, double y) {
	return (-1 <= x && x <= 1) && (-1 <= y && y <= 1);
}

int main () {
	double x, y;
	std::cin >> x >> y;
	if (IsPointInSquare (x, y)) std::cout << "YES";
	else std::cout << "NO";
	return 0;
}
