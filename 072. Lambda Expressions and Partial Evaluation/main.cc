#include <iostream>

auto processor(int a)
{
	return [a](int b) {return a + b; };
}

int main()
{
	auto p = processor(10);
	std::cout << p(20) << std::endl;
	return EXIT_SUCCESS;
}