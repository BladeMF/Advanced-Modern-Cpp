#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <vector>
#include "main.h"

int main()
{
	// extract_texts();
	std::ifstream input_file{"input.txt"};
	std::string line;
	std::vector<int> numbers;
	while (std::getline(input_file, line)) {
		std::istringstream iss{line};
		int n;
		while (iss >> n)
			numbers.push_back(n);
	};

	for (auto n : numbers) {
		std::cout << std::setw(4) << n << std::endl;
	}
	return EXIT_SUCCESS;
}
void extract_texts()
{
	std::ostringstream ss;
	std::string text;
	std::cout << "Enter text: ";
	std::cin >> text;
	ss << std::setw(15) << text << std::endl;
	std::cout << "Enter text: ";
	std::cin >> text;
	ss << std::setw(15) << text << std::endl;
	std::cout << ss.str();
}