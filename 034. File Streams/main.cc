#include <iostream>
#include <fstream>

using namespace std::string_literals;

int main()
{
	// std::ifstream input{"text.txt"};
	// std::string s;
	// while (std::getline(input, s))
	// 	std::cout << s << ",";
	// input.close();
	std::ofstream output{"output.txt"};
	output << "Hello, World!";
	output.close();
	return EXIT_SUCCESS;
}