#include <iostream>

class Test
{
	int i;
	std::string str;

public:
	Test(int i, std::string str) : i(i), str(str) {}
	Test(const Test &other) : i(other.i), str(other.str)
	{
		std::cout << "Copy constructor called ("
							<< str << ")."
							<< std::endl;
	}

	Test &operator=(const Test &other)
	{
		std::cout << "Assignment operator called ("
							<< "from " << str
							<< " to " << other.str
							<< ")." << std::endl;
		i = other.i;
		str = other.str;
		return *this;
	}
	~Test()
	{
		std::cout << "Destructor called ("
							<< str << ")."
							<< std::endl;
	}
};

int main()
{
	Test t{5, "asd"};
	Test t2{t};
	Test t3{1, "1"};
	t3 = t2;
}