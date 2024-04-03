#include <iostream>

using namespace std;

int main()
{
	auto i{1'000'000'000'000'000};
	auto c = "a string";
	auto s = "another string"s;
	auto it = s.begin();
	while (it != s.end()) {
		cout << *it << "|";
		++it;
	}
	cout << endl;

	int i2{5};
	int& i3{i2};
	auto& y{i3};
	y++;
	cout << i2 << "," << i3 << "," << y << endl;
	return EXIT_SUCCESS;
}