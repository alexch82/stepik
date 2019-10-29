#include <iostream>

int main() {
	int x, sum = 0;
	do {
		std::cin >> x;
		sum += x;
	} while (x != 0);
	std::cout << sum;
	return 0;
}
