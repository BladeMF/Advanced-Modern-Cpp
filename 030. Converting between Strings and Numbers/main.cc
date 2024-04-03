#include <iostream>

using namespace std::string_literals;

int main()
{
	std::cout << std::to_string(42) << std::endl;
	std::cout << std::to_string(3.14) << std::endl;

	size_t pos;
	auto s = "ff"s;
	std::cout << std::stoi(s, &pos, 16) << std::endl;
	std::cout << s[pos] << std::endl;

	size_t pos2;
	auto s2 = "4.13f"s;
	std::cout << std::stod(s2, &pos2) << std::endl;
	std::cout << s2[pos2] << std::endl;
	return EXIT_SUCCESS;
}