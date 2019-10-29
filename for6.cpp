#include <iostream>
#include <vector>

int main() {
	int n, min = 0;
	std::cin >> n;
	std::vector <int> a(n);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
		if (a[i] > 0) {
			if (min == 0) min = a[i];
			else min = a[i] < min ? a[i] : min;
		}
	}
	std::cout << min;
	return 0;
}
