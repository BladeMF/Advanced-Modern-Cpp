#include <iostream>

int main()
{
	int y = 1;
	auto f = [y = y + 1](int x) { return x + y; };
	std::cout << f(5) << std::endl;
	std::cout << y << std::endl;
	return EXIT_SUCCESS;
}