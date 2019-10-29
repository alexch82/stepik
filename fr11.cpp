#include <iostream>

int sum() {
    int n;
	if (std::cin >> n && n) return n + sum();
    return 0;
}

int main() {
	std::cout << sum();
	return 0;
}
