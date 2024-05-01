#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
void print_vector(const std::vector<T>& v)
{
	std::cout << "{ ";
	for (const auto& e : v)
		std::cout << e << ", ";
	std::cout << "}" << std::endl;
}

void demo_fill()
{
	std::vector<int> v(10);
	std::fill(v.begin(), v.end(), 42);
	print_vector(v);
}

void demo_fill_n()
{
	std::vector<int> v(0);
	std::fill_n(std::back_insert_iterator(v), 5, 42);
	print_vector(v);
}

void demo_generate()
{
	std::vector<int> v(10);
	std::generate(v.begin(), v.end(), []() { return 42; });
	print_vector(v);
}

void demo_generate_n()
{
	std::vector<int> v(0);
	std::generate_n(std::back_insert_iterator(v), 5, []() { return 42; });
	print_vector(v);
}

int main()
{
	demo_generate_n();
	return EXIT_SUCCESS;
}