#include <iostream>
#include <vector>
#include <algorithm>

void print_vector(const std::vector<int>& v)
{
	for (const auto& i : v) {
		std::cout << i << ", ";
	}
	std::cout << std::endl;
}
void sort_vector(std::vector<int>& v)
{
	print_vector(v);
	std::sort(v.begin(), v.end(), [](int a, int b) { return a > b; });
	print_vector(v);
}

int main()
{
	std::vector<int> v{1, 2, 3, 4, 5, 6};
	sort_vector(v);
	return EXIT_SUCCESS;
}