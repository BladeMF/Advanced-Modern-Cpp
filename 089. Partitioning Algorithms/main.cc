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

void demo_partition()
{
	std::vector<int> v{1, 2, 3, 4, 5};
	auto is_even = [](int x) { return x % 2 == 0;};
	std::cout << std::boolalpha << std::is_partitioned(v.begin(), v.end(), is_even) << std::endl;
	std::partition(v.begin(), v.end(), is_even);
	print_vector(v);
	auto point = std::partition_point(v.begin(), v.end(), is_even);
	std::cout << *point << " at index " << std::distance(v.begin(), point) << std::endl;
	std::cout << std::boolalpha << std::is_partitioned(v.begin(), v.end(), is_even) << std::endl;
}

int main()
{
	demo_partition();
	return EXIT_SUCCESS;
}