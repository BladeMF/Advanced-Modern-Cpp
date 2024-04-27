#include <iostream>
#include <vector>
#include <numeric>

template<typename T>
void print(const std::vector<T>& v)
{
	for (const auto& i : v) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
}

void demo_iota()
{
	std::vector<int> v(10);
	std::iota(v.begin(), v.end(), 0);
	print(v);
}

void demo_accumulate()
{
	std::vector<int> v(10);
	std::iota(v.begin(), v.end(), 0);
	std::cout << std::accumulate(
		v.begin(), v.end(), 0,
		[](int a, int b) {
			return a - b;
		}
	) << std::endl;
}


int main()
{
	demo_accumulate();
	return EXIT_SUCCESS;
}