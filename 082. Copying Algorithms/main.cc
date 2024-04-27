#include <iostream>
#include <algorithm>

using namespace std::string_literals;
int main()
{
	auto s = "Hello"s;
	auto vowels = "aeiou"s;
	std::string s2{};
	std::copy(s.begin(), s.end(), std::back_inserter(s2));
	std::cout << s2 << std::endl;

	std::string s3{};
	std::copy_n(s.begin(), 3, std::back_inserter(s3));
	std::cout << s3 << std::endl;

	std::string s4{};
	std::copy_if(s.begin(), s.end(), std::back_inserter(s4),
		[&vowels](char c) { return vowels.find(c) != std::string::npos; }
	);
	std::cout << s4 << std::endl;

	return EXIT_SUCCESS;
}