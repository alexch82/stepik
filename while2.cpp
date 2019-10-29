#include <iostream>

int main (int argc, char** argv)
{
	int n, i = 2;
	std::cin >> n;
	while ( n % i ) i++;
	std::cout << i;
	return 0;
}
