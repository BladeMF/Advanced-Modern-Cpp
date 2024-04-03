#include <iostream>
#include <vector>

using namespace std;

void vector_test()
{
	std::vector<int> v;
	v.push_back(4);
	v.push_back(3);
	v.push_back(2);
	v.push_back(1);

	std::cout << v[0] << ", "
						<< v[3]
						<< std::endl;
	v[2] = 6;
	for (auto i : v)
	{
		std::cout << i << "; ";
	}
	std::cout << std::endl;
}

void string_test()
{
	string s{"Hello"};
	cout << s[0] << ", "
			 << s[4] << endl;
	s[3] = 'b';
	for (auto c : s)
		cout << c << "; ";
}
int main()
{
	string_test();
	return 0;
}