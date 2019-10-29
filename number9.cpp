#include <iostream>

int main() {
	int a, b, n, r, c;
	std::cin >> a >> b >> n;
	std::cout << n * a + (b * n) / 100 << " " << (b * n) % 100;
	return 0;
}
