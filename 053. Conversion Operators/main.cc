#include <iostream>

class Test {
	int i{42};
public:
	operator int() { return i; }
};

int main()
{
	Test t;
	std::cout << (t + 10) << std::endl;
	return EXIT_SUCCESS;
}