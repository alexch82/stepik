#include <iostream>

int main (int argc, char** argv)
{
	int n, count = 0;
	do {
		std::cin >> n;
		count++;
	} while ( n );
	std::cout << --count;
	return 0;
}
