#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::vector<int> v(10);
	std::fill_n(v.begin(), 5, 1);

	std::generate_n(v.begin(), 2, rand);
	return EXIT_SUCCESS;
}