#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v{1,2,3,4};
	int remainder{1};
	auto found = std::find_if(
		v.cbegin(),
		v.cend(),
		[remainder](int i) { return i % 2 == remainder; }
	);
	if (v.cend() != found) {
		std::cout << *found << std::endl;
	}
	return EXIT_SUCCESS;
}