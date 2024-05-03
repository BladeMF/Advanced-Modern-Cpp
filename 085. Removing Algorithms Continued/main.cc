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

void demo_remove_if()
{
	std::vector v{1, 2, 3, 4, 5};
	auto removed = std::remove_if(v.begin(), v.end(), [](int i) {return i % 3 == 0;});
	print_vector(v);
	v.erase(removed, v.end());
	print_vector(v);
}

void demo_remove_copy()
{
	std::vector v{1, 2, 3, 4, 5};
	std::vector<int> v2(0);
	std::remove_copy(v.begin(), v.end(), std::back_inserter(v2), 3);
	print_vector(v);
	print_vector(v2);
}

void demo_remove_copy_if()
{
	std::vector v{1, 2, 3, 4, 5};
	std::vector<int> v2(0);
	std::remove_copy_if(
		v.begin(), v.end(), std::back_inserter(v2),
		[](int i) {return i % 3 == 0;}
	);
	print_vector(v);
	print_vector(v2);
}

void demo_unique()
{
	std::vector v{1, 2, 3, 4, 5, 3};
	std::sort(v.begin(), v.end());
	auto removed = std::unique(v.begin(), v.end(), [](int i, int j) {return i == j - 1;});
	print_vector(v);
	v.erase(removed, v.end());
	print_vector(v);
}

void demo_unique_copy()
{
	std::vector v{1, 2, 3, 4, 5, 3};
	std::vector<int> v2(0);
	std::sort(v.begin(), v.end());
	std::unique_copy(
		v.begin(), v.end(),
		std::back_inserter(v2),
		[](int i, int j) {return i == j - 1;}
	);
	print_vector(v);
	print_vector(v2);
}

int main()
{
	demo_unique_copy();
	return EXIT_SUCCESS;
}