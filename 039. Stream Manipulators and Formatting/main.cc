#include <iostream>
#include <iomanip>

void print_booleans()
{
	std::cout << std::boolalpha << true << ", " << false << std::endl;
}

void print_table()
{
	std::cout << std::setfill('#');
	std::cout << std::setw(15) << "Penguins " << 5 << std::endl;
	std::cout << std::setw(15) << "Polar bears " << 2 << std::endl;
}

int main()
{
	print_booleans();
	print_table();
	return EXIT_SUCCESS;
}