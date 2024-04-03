#include <iostream>

using namespace std::string_literals;

int main()
{
	auto s1 = "My string"s;
	auto s2 = "Somebody else's string"s;
	s1.swap(s2);
	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;

	auto d = s1.data();
	do {
		std::cout << *d << "|";
	} while (*(++d));
	std::cout << std::endl;


	return EXIT_SUCCESS;
}