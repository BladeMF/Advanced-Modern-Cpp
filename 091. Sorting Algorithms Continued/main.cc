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

int main()
{
	std::string s1{"lskjdjqowjddam"};
	std::partial_sort(s1.begin(), s1.begin() + 3, s1.end());
	std::cout << s1 << std::endl;

	return EXIT_SUCCESS;
}