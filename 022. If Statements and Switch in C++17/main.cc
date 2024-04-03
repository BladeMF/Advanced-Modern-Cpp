#include <iostream>

using namespace std;

int main()
{
	if (int i{2}; i % 2 == 0)
		cout << i << " is even" << endl;
	switch (char c{'a'}; c) {
	case 'a':
		cout << "this is it!" << endl;
		[[fallthrough]]
	default:
		cout << "this is not it!" << endl;
	}
	return EXIT_SUCCESS;
}