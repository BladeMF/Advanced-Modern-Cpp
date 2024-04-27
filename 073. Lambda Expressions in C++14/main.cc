#include <iostream>

using namespace std::string_literals;

void generic_lambda()
{
	auto f = [](auto a, auto b) { return a + b; };
	std::cout << f(1, 2) << std::endl;
	std::cout << f("1"s, "2"s) << std::endl;
}

void lambda_with_local()
{
	int x = 7;
	auto f = [y = x + 3](int a) { return a + y; };
	std::cout << f(1) << std::endl;
}

int main()
{
	lambda_with_local();
	return EXIT_SUCCESS;
}