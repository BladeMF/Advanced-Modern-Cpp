#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v{3,1,4};
	int max{3};
	int count{0};
	std::for_each(
		v.begin(),
		v.end(),
		[&](int a) {
			if (a > max) ++count;
		}
	);
	std::cout << count << std::endl;


	return EXIT_SUCCESS;
}