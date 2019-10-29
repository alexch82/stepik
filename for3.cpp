#include <iostream>
#include <vector>

int main() {
	int n, k = 0;
	std::cin >> n;
	std::vector <int> a(n);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
		if (a[i] > 0) k++;
	}
	std::cout << k;
	return 0;
}
