#include <iostream>
#include <vector>

using namespace std::string_literals;

int main()
{
	std::vector<std::string> v{"a"s, "b"s, "c"s, "d"s};
	auto inserter = std::back_inserter(v);

	*inserter = "e"s;
	*inserter = "f"s;

	for (const auto& i : v) {
		std::cout << i << ", ";
	}
	std::cout << std::endl;

	return EXIT_SUCCESS;
}