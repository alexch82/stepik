#include <iostream>
#include <vector>

int main() {
	int n;
	std::cin >> n;
	std::vector <int> a(n);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
		if (a[i] > a[i-1]) std::cout << a[i] << " ";
	}
	std::cout << k;
	return 0;
}
