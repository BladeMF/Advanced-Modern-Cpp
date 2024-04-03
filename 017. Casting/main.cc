#include <iostream>

using namespace std;

void print_as_char(int c)
{
	cout << static_cast<char>(c) << endl;
}

void expecting_int(int* c)
{
	*c = *c + 1;
	cout << *c << endl;
}
int main()
{
	print_as_char(65);
	const int const_int{5};
	expecting_int(const_cast<int*>(&const_int));
	return EXIT_SUCCESS;
}