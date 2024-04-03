#include <iostream>
#include "function_arguments.h"

void by_val(int arg)
{
	arg += 10;
	std::cout << "Received by value: "
						<< &arg
						<< "\t= "
						<< arg
						<< std::endl;
}
void show_by_value()
{
	int val{5};
	std::cout << "Initial: "
						<< &val
						<< "\t\t= "
						<< val
						<< std::endl;

	by_val(val);

	std::cout << "End: \t\t\t= "
						<< val
						<< std::endl;
}

void by_ref(int &arg)
{
	arg += 10;
	std::cout << "Received by reference: "
						<< &arg
						<< "\t= "
						<< arg
						<< std::endl;
}

void show_by_reference()
{
	int val{5};
	std::cout << "Initial: "
						<< &val
						<< "\t\t= "
						<< val
						<< std::endl;

	by_ref(val);

	std::cout << "End: \t\t\t= "
						<< val
						<< std::endl;
}

void by_address(int *arg)
{
	*arg += 10;
	std::cout << "Received by address: "
						<< arg
						<< "\t= "
						<< *arg
						<< std::endl;
}

void show_by_address()
{
	int val{5};
	std::cout << "Initial: "
						<< &val
						<< "\t\t= "
						<< val
						<< std::endl;

	by_address(&val);

	std::cout << "End: \t\t\t= "
						<< val
						<< std::endl;
}

int main()
{
	show_by_value();
	std::cout << "--------" << std::endl;
	show_by_reference();
	std::cout << "--------" << std::endl;
	show_by_address();
}