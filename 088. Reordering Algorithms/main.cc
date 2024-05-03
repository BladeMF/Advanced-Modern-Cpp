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

void demo_reverse()
{
	std::vector v{1, 2, 3, 4, 5};
	std::reverse(v.begin(), v.end());
	print_vector(v);
}

void demo_rotate()
{
	std::vector v{1, 2, 3, 4, 5};
	std::rotate(v.begin(), v.begin() + 3, v.end());
	print_vector(v);
}

int main()
{
	demo_rotate();
	return EXIT_SUCCESS;
}