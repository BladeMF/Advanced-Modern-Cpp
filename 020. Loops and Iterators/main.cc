#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string s{"This is my string."};
	for (auto it = s.begin(); it != s.end(); ++it) {
		cout << *it << "|";
	}
	cout << endl;
	for (auto it = s.rbegin(); it != s.rend(); ++it) {
		cout << *it << "|";
	}
	cout << endl;
	for (auto it = s.cbegin(); it != s.cend(); ++it) {
		cout << *it << "|";
	}
	cout << endl;
	for (auto it = s.crbegin(); it != s.crend(); ++it) {
		cout << *it << "|";
	}
	cout << endl;
	int arr[]{1, 2, 3, 4, 5, 6};
	for (auto it = begin(arr); it != end(arr); ++it) {
		cout << *it << "|";
	}
	cout << endl;
	vector<int> vec{1, 2, 3, 4, 5, 6};
	for (auto i : vec)
		cout << i << "|";

	for (auto& i : vec)
		i += 2;

	cout << endl;
	for (const auto i : vec)
		cout << i << "|";


	for (auto it = begin(vec); it != end(vec);) {
		if (*it % 2 == 0)
			it = vec.erase(it);
		else
			it++;
	}

	cout << endl;
	for (const auto i : vec)
		cout << i << "|";

	return EXIT_SUCCESS;
}