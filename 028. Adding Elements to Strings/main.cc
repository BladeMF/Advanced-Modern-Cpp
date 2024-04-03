#include <iostream>

using namespace std::string_literals;

int main()
{
	std::string hello{"Hello"};
	hello.append(" world");
	std::string hello2{"Hello"};
	hello2.append("wow!!!!", 3, 2);

	std::cout << hello << std::endl;
	std::cout << hello2 << std::endl;

	std::string str{"for"};
	str.insert(2, "lde", 0, 1);
	std::cout << str << std::endl;

	auto str2 = "My"s;
	auto b = str2.begin();
	str2.insert(end(str2), 16, '2');
	std::cout << str2 << std::endl;
	b = str2.begin();
	std::cout << *b << std::endl;

	return EXIT_SUCCESS;
}