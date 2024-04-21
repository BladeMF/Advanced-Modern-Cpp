#include <iostream>
#include <algorithm>

using namespace std::string_literals;

int main()
{
	auto s = "This is my string"s;
	auto found = std::find(s.cbegin(), s.cend(), 'm');
	if (found == s.cend()) {
		std::cout << "Did not find 'm'." << std::endl;
		return EXIT_FAILURE;
	}
	std::cout << (found - s.cbegin()) << std::endl;

	return EXIT_SUCCESS;
}