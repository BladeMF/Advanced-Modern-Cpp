#include <iostream>

class Test
{
public:
	Test()
	{
		std::cout << "Default constructor." << std::endl;
	}
	Test(const Test& source)
	{
		std::cout << "Copy." << std::endl;
	}
};

Test func()
{
	return Test();
}

Test func2()
{
	Test t = Test();
	return t;
}

void func3(Test t)
{}

int main()
{
	func3(Test());
	std::cout << "Done." << std::endl;
	return EXIT_SUCCESS;
}