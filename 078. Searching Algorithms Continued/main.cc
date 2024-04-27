#include <iostream>
#include <algorithm>
#include <vector>

using namespace std::string_literals;

void demo_mismatch()
{
	auto s1 = "my string"s;
	auto s2 = "my strang"s;
	auto result = std::mismatch(s1.begin(), s1.end(), s2.begin());
	if (result.first != s1.end() && result.second != s2.end()) {
		std::cout << "Found a difference at index "
			<< std::distance(s1.begin(), result.first) << ": "
			<< *result.first << " != " << *result.second << std::endl;
	}
}

void demo_all_none_some_of()
{
	std::vector v{3,6,9};
	auto predicate = [](int i) { return i % 4 == 0;};
	auto all = std::all_of(v.begin(), v.end(), predicate);
	auto some = std::any_of(v.begin(), v.end(), predicate);
	auto none = std::none_of(v.begin(), v.end(), predicate);
	if (all) std::cout << "All are divisible." << std::endl;
	if (some) std::cout << "Some are divisible." << std::endl;
	if (none) std::cout << "None are divisible." << std::endl;
}

void demo_binary_search()
{
	std::vector n{45, 12, 67, 29, 83, 91, 38, 56, 14};
	std::sort(n.begin(), n.end());
	if (std::binary_search(n.begin(), n.end(), 57))
		std::cout << "Found it." << std::endl;
	else
		std::cout << "Didn't find it." << std::endl;
}

void demo_includes()
{
	std::vector n{45, 12, 67, 29, 83, 91, 38, 56, 14};
	std::vector n2{45, 12, 67, 29, 14};
	std::sort(n.begin(), n.end());
	std::sort(n2.begin(), n2.end());
	if (std::includes(n.begin(), n.end(), n2.begin(), n2.end()))
		std::cout << "Includes." << std::endl;
	else
		std::cout << "Didn't include." << std::endl;
}

int main()
{
	demo_includes();
	return EXIT_SUCCESS;
}