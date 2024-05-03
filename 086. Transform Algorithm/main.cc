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

void demo_transform()
{
	std::vector v{1, 2, 3, 4, 5};
	std::vector<int> v2(v.size());
	std::transform(v.cbegin(), v.cend(), v2.begin(), [](int i) { return i + 2; });
	print_vector(v2);
}

void demo_transform_2()
{
	std::vector v1{1, 2, 3, 4, 5};
	std::vector v2{6, 7, 8, 9, 10};
	std::vector<int> v3(v1.size());
	std::transform(
		v1.cbegin(), v1.cend(), v2.cbegin(), v3.begin(),
		[](int i, int j) { return j - i; }
	);
	print_vector(v3);
}

bool equal_strings(const std::string& s1, const std::string& s2)
{
	std::string s11{s1};
	std::string s21{s2};
	std::transform(s11.begin(), s11.end(), s11.begin(), ::tolower);
	std::transform(s21.begin(), s21.end(), s21.begin(), ::tolower);
	return s11 == s21;
}

int main()
{
	std::cout << std::boolalpha;
	std::cout << equal_strings("Hello", "hello") << std::endl;
	std::cout << equal_strings("Hello", "hello1") << std::endl;
	return EXIT_SUCCESS;
}