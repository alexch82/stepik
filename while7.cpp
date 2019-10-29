#include <iostream>

int main() {
	int x, max = 0;
	do {
		std::cin >> x;
		max = x > max ? x : max;
	} while (x);
	std::cout << max;
	return 0;
}
