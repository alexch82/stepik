#include <iostream>

int main (int argc, char** argv)
{
	int n, i = 1;
	std::cin >> n;
	while ( i <= n ) {
		std::cout << i << " ";
		i <<= 1;
	}
	return 0;
}
