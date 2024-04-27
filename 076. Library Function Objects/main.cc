#include <iostream>
#include <vector>
#include <algorithm>

using namespace std::string_literals;

int main()
{
	std::vector<std::string> v{"John"s, "Smith"s, "Mary"s, "Sue"s};
	std::sort(v.begin(), v.end(), std::greater());
	for (const auto& i : v) {
		std::cout << i << " ";
	}

	return EXIT_SUCCESS;
}