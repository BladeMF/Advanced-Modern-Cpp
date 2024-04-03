#include <iostream>
#include <fstream>

using namespace std::string_literals;

int main()
{
	std::ofstream file{"output.txt"};
	for (size_t i = 0; i < 5'000; i++) {
		std::cout << i << "\n";
		file << i << "\n";
		if (i == 4'100) {
			file << std::flush;
			std::terminate();
		}
	}

	return EXIT_SUCCESS;
}