#include <iostream>
#include <vector>
#include <algorithm>

using namespace std::string_literals;

class gt_n
{
	int n;
public:
	gt_n(int n) : n(n) {}

	bool operator()(const std::string& a) const
	{
		return a.size() > n;
	}
};

int main()
{
	std::vector<std::string> words{"1", "22", "333", "4444", "55555", "666666"};
	auto found = std::find_if_not(words.cbegin(), words.cend(), gt_n(7));
	if (found != words.cend()) {
		std::cout << *found << std::endl;
	} else {
		std::cout << "not found" << std::endl;
	}
	return EXIT_SUCCESS;
}