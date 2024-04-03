#include <iostream>
#include <cctype>

using namespace std::string_literals;

int main()
{
	auto s = "Hello, World!"s;
	for (auto c : s) {
		std::cout << c << '\t';
		if (std::isupper(c)) {
			std::cout << " (upper case)";
		} else if (std::islower(c)) {
			std::cout << " (lowercase case)";
		} else if (std::ispunct(c)) {
			std::cout << " (punctuation)";
		} else if (std::isspace(c)) {
			std::cout << " (whitespace)";
		}
		std::cout << std::endl;
	}
	return EXIT_SUCCESS;
}