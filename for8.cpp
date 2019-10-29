#include <iostream>
#include <vector>

int main() {
	int n, k = 1;
	std::cin >> n;
	std::vector <int> a(n);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
		if (a[i-1] < a[i] && i) k++;
	}
	std::cout << k;
	return 0;
}
