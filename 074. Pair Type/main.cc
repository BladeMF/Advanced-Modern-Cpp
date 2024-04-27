#include <iostream>

using namespace std::string_literals;

template <typename T, typename U>
void print_pair(std::pair<T, U> p)
{
	std::cout << "{"s << p.first << ", "s << p.second << "}"s << std::endl;
}

int main()
{
	std::pair<int, int> p1{1, 2};
	std::pair<int, int> p2{std::make_pair(1, 2)};
	print_pair(p1);
	print_pair(p2);
	return EXIT_SUCCESS;
}