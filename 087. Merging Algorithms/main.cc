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

void demo_merge()
{
	std::vector<int> v1{1, 3, 7, 5};
	std::vector<int> v2{4, 1, 6, 8};
	std::sort(v1.begin(), v1.end());
	std::sort(v2.begin(), v2.end());
	std::vector<int> v3;
	std::merge(v1.cbegin(), v1.cend(), v2.cbegin(), v2.cend(), std::back_inserter(v3));
	print_vector(v3);
}

void demo_intersection()
{
	std::vector<int> v1{1, 3, 7, 5};
	std::vector<int> v2{4, 1, 6, 8};
	std::vector<int> v3;
	std::sort(v1.begin(), v1.end());
	std::sort(v2.begin(), v2.end());
	std::set_intersection(v1.cbegin(), v1.cend(), v2.cbegin(), v2.cend(), std::back_inserter(v3));
	print_vector(v3);
}

void demo_union()
{
	std::vector<int> v1{1, 3, 7, 5};
	std::vector<int> v2{4, 1, 6, 8};
	std::vector<int> v3;
	std::sort(v1.begin(), v1.end());
	std::sort(v2.begin(), v2.end());
	std::set_union(v1.cbegin(), v1.cend(), v2.cbegin(), v2.cend(), std::back_inserter(v3));
	print_vector(v3);
}

int main()
{
	demo_union();
	return EXIT_SUCCESS;
}