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

void demo_remove()
{
	std::vector v{1, 2, 1, 4, 5, 6, 7};
	auto removed = std::remove(v.begin(), v.end(), 1);
	print_vector(v);
	std::cout << "removed: " << *removed << std::endl;
	v.erase(removed, v.end());
	print_vector(v);
}

int main()
{
	demo_remove();
	return EXIT_SUCCESS;
}