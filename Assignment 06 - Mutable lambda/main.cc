#include <iostream>

int main()
{
	int x{42}, y{99}, z{0};

	auto lam = [=, &z]() mutable { ++x; ++y; z = x + y; };
	lam();
	lam();
	std::cout << x << " " << y << " " << z << std::endl;
	return EXIT_SUCCESS;
}