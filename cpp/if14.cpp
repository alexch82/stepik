#include <iostream>

int main() {
	int a1, b1, c1, a2, b2, c2;
	const char* equal = "Boxes are equal";
	const char* small = "The first box is smaller than the second one,";
	const char* large = "The first box is larger than the second one";
	std::cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	if (a1 * b1 * c1 < a2 * b2 * c2) std::cout << small;
	else if (a1 * b1 * c1 == a2 * b2 * c2) std::cout << equal;
	else std::cout << large;
	return 0;
}
