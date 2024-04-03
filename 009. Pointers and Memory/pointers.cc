#include <iostream>
#include "pointers.h"

int main()
{
	// simple_pointer();
	int *ar = new int[3]{1, 2, 3};
	std::cout << ar << std::endl;
	std::cout << ar[0] << std::endl;
	std::cout << ar[1] << std::endl;
	std::cout << ar[2] << std::endl;
	delete[] ar;
	return 0;
}

void simple_pointer()
{
	int val{4};
	int *a{&val};

	std::cout << a << "\n"
						<< &val << "\n"
						<< *a
						<< std::endl;
}