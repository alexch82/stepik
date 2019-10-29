#include <iostream>

int main() {
	int c1, r1, c2, r2;
	std::cin >> c1 >> r1 >> c2 >> r2;
	bool c = c1 == (c2 + 1) || c1 == (c2 - 1) || c1 == c2;
	bool r = r1 == (r2 + 1) || r1 == (r2 - 1) || r1 == r2;
	if (c && r) std::cout << "YES";
	else std::cout << "NO";
	return 0;
}
