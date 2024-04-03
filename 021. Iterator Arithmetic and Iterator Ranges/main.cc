#include <iostream>

using namespace std;

int main()
{
	string s{"Joesthaman"};
	cout << *begin(s) << endl;
	cout << *(end(s) - 1) << endl;
	auto it = begin(s);
	advance(it, distance(begin(s), end(s)) / 2);
	cout << *it << endl;
	return EXIT_SUCCESS;
}