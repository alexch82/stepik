#include <iostream>

int main() {
	int n;
	std::cin >> n;
	std::cout << (10 * ((n % 1000) / 100) + (n / 1000)) - (n % 100) + 1;
	return 0;
}
