#include <iostream>
#include <vector>
#include <algorithm>

using namespace std::string_literals;

int main()
{
	std::vector<std::string> v{"v12", "v3", "v2"};
	auto found = std::find_if(
		v.cbegin(),
		v.cend(),
		[](std::string const& s) { return *(s.cend() - 1) == '2'; }
	);
	if (found != v.cend()) {
		std::cout << *found << std::endl;
	}

	return EXIT_SUCCESS;
}