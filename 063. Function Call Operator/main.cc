#include <iostream>
#include <vector>

class divisible
{
	int divisor;
public:
	divisible(int d) : divisor(d) {}
	bool operator()(int num) const
	{
		return num % divisor == 0;
	}
};

void func(const std::vector<int>& v, divisible d)
{
	for (auto i : v)
		if (d(i))
			std::cout << i << " is divisible." << std::endl;
}

int main()
{
	divisible d{3};
	std::vector<int> v{1, 2, 3, 4, 5, 6};
	func(v, d);
	return EXIT_SUCCESS;
}