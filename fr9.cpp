#include <iostream>

bool IsPrime(int n) {
	if (n == 2) return true;
    return false;
}

int main() {
	int n;
	std::cin >> n;
	if (IsPrime(n)) std::cout << "YES";
	else std::cout << "NO";
	return 0;
}
