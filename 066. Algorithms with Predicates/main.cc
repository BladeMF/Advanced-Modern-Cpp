#include <iostream>
#include <vector>
#include <algorithm>

using namespace std::string_literals;

bool is_shorter(const std::string& a, const std::string& b)
{
	return a.size() < b.size();
}

class is_shorter2
{
public:
	bool operator()(const std::string& a, const std::string& b) const
	{
		return a.size() > b.size();
	}
};

int main()
{
	std::vector<std::string> words{"2.w1"s, "1.wo2"s, "4.wor3"s, "3.word4"s};
	std::cout << words.size() << std::endl;
	std::sort(words.begin(), words.end(), is_shorter2());
	for (const auto& word : words) {
		std::cout << word << ", ";
	}
	std::cout << std::endl;
	return EXIT_SUCCESS;
}