#include <iostream>
#include <iterator>
#include <vector>

void ostream()
{
	std::ostream_iterator<int> out(std::cout, "\n");
	*out++ = 1;
	*out++ = 2;
	*out++ = 3;
}

void istream()
{
	std::istream_iterator<int> in(std::cin);
	int input = *in++;
	std::cout << input << std::endl;
}

void istream_vector()
{
	std::istream_iterator<int> in(std::cin);
	std::istream_iterator<int> eof;
	std::vector<int> vec;

	while (in != eof)
		vec.push_back(*in++);

	for (auto i : vec) {
		std::cout << i << std::endl;
	}
}

int main()
{
	istream_vector();
}