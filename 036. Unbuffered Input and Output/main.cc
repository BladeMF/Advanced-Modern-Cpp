#include <iostream>
#include <fstream>

using namespace std::string_literals;

void read_one_character_at_a_time()
{
	std::cout << "Provide something to read:\n";
	char c;
	while (std::cin.get(c)) {
		std::cout.put(c);
	}
}

void read_a_buffer()
{
	std::ifstream ifs{"input.txt"};
	if (!ifs) {
		std::cerr << "Could not open input.txt" << std::endl;
		return;
	}
	int buffer_length = 10;
	char buffer[buffer_length];
	while (ifs.read(buffer, buffer_length)) {
		std::cout.write(buffer, buffer_length);
	}
	std::cout << "|(" << ifs.gcount() << ")";
	std::cout.write(buffer, ifs.gcount());
}

int main()
{
	// read_one_character_at_a_time();
	read_a_buffer();
	return EXIT_SUCCESS;
}