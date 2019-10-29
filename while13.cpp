#include <iostream>

int main() {
	int k = 0, l = 0, m = 0, r = 0;
	std::cin >> r;
	while (r) {
		if (m > l && m > r && l) k++;
		l = m;
		m = r;
		std::cin >> r;
	}
	std::cout << k;
	return 0;
}
