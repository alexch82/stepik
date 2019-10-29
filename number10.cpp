#include <iostream>

int main() {
	int ss;
	std::cin >> ss;
	std::cout
		<< (ss / 3600) % 24 << ":"
		<< ((ss % 3600) / 60) / 10 << ((ss % 3600) / 60) %10 << ":"
		<< (ss % 60) / 10 << (ss % 60) % 10;
	return 0;
}
