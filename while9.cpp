#include <iostream>

int main() {
	int x, MAX = 0, max = 0;
	do {
		std::cin >> x;
		if (x >= MAX) {
			max = MAX;
			MAX = x;
		} else max = x > max ? x : max;
	} while (x);
	std::cout << max;
	return 0;
}
