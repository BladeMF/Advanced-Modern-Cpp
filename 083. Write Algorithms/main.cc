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

void demo_replace()
{
	std::vector<int> v{1, 2, 3, 4, 5};
	std::replace(v.begin(), v.end(), 3, 10);
	print_vector(v);
}

void demo_replace_copy()
{
	std::vector<int> v{1, 2, 3, 4, 5};
	std::vector<int> v2(0);
	std::replace_copy(v.begin(), v.end(), std::back_insert_iterator(v2), 3, 10);
	print_vector(v);
	print_vector(v2);
}

void demo_replace_if()
{
	std::vector<int> v{1, 2, 3, 4, 5};
	std::replace_if(
		v.begin(), v.end(),
		[](int i) { return i == 3; },
		10
	);
	print_vector(v);
}

int main()
{
	demo_replace_copy();
	return EXIT_SUCCESS;
}