#include <iostream>

using callback = void (*)(int, int);

void my_callback(int a, int b)
{
	std::cout << a + b << std::endl;
}

void my_func(callback f)
{
	f(5, 6);
}

callback get_callback()
{
	return &my_callback;
}

int main()
{
	my_func(get_callback());
	return EXIT_SUCCESS;
}