#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v{1,2,3,4};
	std::for_each(v.begin(), v.end(), [](int& i) { ++i;});
	std::for_each(v.begin(), v.end(), [](const int& i) {std::cout << i << ", ";});
	return EXIT_SUCCESS;
}