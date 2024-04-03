#include <iostream>
#include <fstream>

using namespace std::string_literals;

void append_to_file()
{
	std::ofstream file{"output.txt", std::ios::app};
	file << "\nNew content!";
}

int main()
{
	append_to_file();
	return EXIT_SUCCESS;
}