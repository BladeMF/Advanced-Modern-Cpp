#include <iostream>
#include <fstream>
#include <limits>

using namespace std::string_literals;

int main()
{
	int x;
	std::cout << "Enter a number: ";
	bool succeeded = false;
	while (!succeeded) {
		std::cin >> x;
		if (std::cin.fail()) {
			std::cout << "Wasn't a number, really. Try again.\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}

		succeeded = true;
	}

	std::cout << "Nice! You've entered " << x << "!\n";

	return EXIT_SUCCESS;
}