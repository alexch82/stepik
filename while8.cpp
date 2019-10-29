#include <iostream>

int main() {
	int x, max = 0, count = 0;
	do {
		std::cin >> x;
		if (x == max) count++;
		if (x > max){
			max = x;
			count = 1;
		}
	} while (x);
	std::cout << count;
	return 0;
}
