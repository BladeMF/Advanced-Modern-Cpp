#include <iostream>

using namespace std::string_literals;
int main()
{
	std::string s1 = "The initial string";
	auto s2 = s1;
	std::cout << &s2 << "=" << &s1 << std::endl;
	auto s3 = "A small string."s;
	s3 += " " + s1;
	std::cout << std::boolalpha;
	std::cout << (s3 > s1) << std::endl;
	auto ar = s3.c_str();
	do {
		std::cout << *ar << "|";
	} while (*(++ar));
	std::cout << std::endl;

	std::string str{"Hello world"};
	str[1] = 'a';
	auto s4 = str.substr(6);
	auto s5 = str.substr(6, 2);
	std::cout << str << std::endl;
	std::cout << s4 << std::endl;
	std::cout << s5 << std::endl;

	std::string hi{"Hello"};
	std::string howdy{'H', 'e', 'l', 'l', 'o'};
	std::string triplex(3, 'x');
	std::string hello(hi, 1);
	std::string hello2(hi, 1, 3);

	std::cout << hi << std::endl;
	std::cout << howdy << std::endl;
	std::cout << triplex << std::endl;
	std::cout << hello << std::endl;
	std::cout << hello2 << std::endl;

	return EXIT_SUCCESS;
}