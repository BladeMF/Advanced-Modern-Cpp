#include <iostream>
#include "main.h"

using namespace std::string_literals;

int main()
{
	auto s = "Hello world"s;
	if (auto pos = s.find('o'); pos != std::string::npos) {
		std::cout << "Found 'o' at position " << pos << "." << std::endl;
	} else {
		std::cout << "Not found." << std::endl;
	}

	if (auto pos = s.find('O'); pos != std::string::npos) {
		std::cout << "Found 'O' at position " << pos << "." << std::endl;
	} else {
		std::cout << "Not found." << std::endl;
	}

	if (auto pos = s.find("or"); pos != std::string::npos) {
		std::cout << "Found 'or' at position " << pos << "." << std::endl;
	} else {
		std::cout << "Not found." << std::endl;
	}

	auto str = "Hello world"s;
	std::string vowels{"aeiou"};
	print_pos_result(str.find_first_of(vowels), str);
	print_pos_result(str.find_last_of(vowels), str);
	print_pos_result(str.find_first_not_of(vowels), str);
	print_pos_result(str.find_last_not_of(vowels), str);

	return EXIT_SUCCESS;
}
void print_pos_result(std::size_t p1, const std::string& str)
{
	if (p1 == std::string::npos) {
		std::cout << "Invalid position." << std::endl;
		return;
	}
	std::cout << p1 << " = " << str[p1] << std::endl;
}