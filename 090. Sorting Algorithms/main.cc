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

void demo_sort()
{
	std::vector<int> v{1, 3, 2, 5, 4};
	print_vector(v);
	std::sort(v.begin(), v.end());
	print_vector(v);
	std::sort(v.begin(), v.end(), std::greater<int>());
	print_vector(v);
}

int main()
{
	demo_sort();
	return EXIT_SUCCESS;
}