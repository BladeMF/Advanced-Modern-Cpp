#include <iostream>

class Test
{
private:
	Test(const Test&) {};
	Test& operator=(const Test&)
	{
		return *this;
	};
public:
	Test() = default;
};

int main()
{
	Test t;
	Test t2(t);
	return EXIT_SUCCESS;
}