#include <iostream>

int x{24};
namespace my
{
	int x{42};
	class my_class
	{
		public:
		int get_int() const { return ::x; }
	};
};

int main()
{
	my::my_class my_class;
	std::cout << my_class.get_int() << std::endl;
	return EXIT_SUCCESS;
}