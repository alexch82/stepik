#include <iostream>

int main (int argc, char** argv)
{
	int n, i = 1;
	std::cin >> n;
	while ( i*i <= n ) {
		std::cout << i*i << " ";
		i++;
	}
	return 0;
}
