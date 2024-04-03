#include <iostream>

using namespace std::string_literals;

int main()
{
	auto str = "Hello, World!"s;
	str.erase(str.begin() + 3, str.end());
	std::cout << str << std::endl;

	auto str2 = "Hello, World!"s;
	str2.replace(str2.begin(), str2.begin() + 1, "What");
	std::cout << str2 << std::endl;

	auto str3 = "Hello, World!"s;
	str3.assign("Other");
	std::cout << str3 << std::endl;
	return EXIT_SUCCESS;
}