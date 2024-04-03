#include <iostream>
#include "main.h"

using namespace std;

void one_dimentional()
{
	int rows{3};
	int columns{2};
	string ar[rows * columns]{"a", "b", "c", "d", "e", "f"};
	cout << ar[1 * columns + 1] << endl;

	for (size_t i = 0; i < rows * columns; i++) {
		cout << ar[i] << "; ";
	}
	cout << endl;
}

void two_dimentional()
{
	string ar[3][2] = {
				{"a", "b"},
				{"c", "d"},
				{"e", "f"},
	};
	cout << ar[1][1] << endl;

	for (size_t i = 0; i < 3; i++) {
		for (size_t j = 0; j < 2; j++) {
			cout << ar[i][j] << "; ";
		}
	}

	cout << endl;
}

int main()
{
	// two_dimentional();
	one_dimentional();

	return EXIT_SUCCESS;
}