#include <iostream>
#include <cctype>

using namespace std::string_literals;

std::string exclaim(const std::string& arg)
{
	std::string result{arg};
	for (auto& c : result) {
		if (std::ispunct(c)) {
			c = '!';
		}
	}
	return result;
}

int main()
{
	std::cout << exclaim("To be, or not to be, that is the question:"s) << std::endl;
	return EXIT_SUCCESS;
}