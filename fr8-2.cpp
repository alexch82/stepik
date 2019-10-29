#include <iostream>
#include <cmath>

int MinDivisor(int n) {
	if (n < 4) return n;
	return n / 2;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << MinDivisor(n);
  return 0;
}
