#include <iostream>

class String
{
	std::string s;

public:
	String() : s("") {}
	String(const std::string& arg) : s(arg) {}
	String(const String& arg) : s(arg.s) {}

	String& operator=(const std::string& arg)
	{
		s = arg;
		return *this;
	}

	void print() const
	{
		std::cout << s << std::endl;
	}
};

int main()
{
	String w{"world"};
	String bang{"bang"};
	String bang2;
	bang = w;
	bang2 = w;

	std::cout << "w = "; w.print();
	std::cout << "bang = "; bang.print();
	std::cout << "bang2 = "; bang2.print();
	return EXIT_SUCCESS;
}