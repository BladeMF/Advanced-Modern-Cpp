#include <iostream>

using namespace std;

int main()
{
	string s{"This is the string"};
	auto it = s.begin();
	while (it != s.end()) {
		cout << *it << "|";
		it++;
	}
	return EXIT_SUCCESS;
}