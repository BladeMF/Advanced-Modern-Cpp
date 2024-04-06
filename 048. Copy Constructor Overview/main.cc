#include <iostream>

class Test
{
	int i{0};
	std::string str{""};

public:
	Test() = default;
	Test(const Test& source) : i(source.i), str(source.str)
	{
		std::cout << "Copy constructor called" << std::endl;
	}
};

int main()
{
	Test t;
	Test t2(t);
	return EXIT_SUCCESS;
}