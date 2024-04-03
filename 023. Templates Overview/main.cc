#include <iostream>
#include <vector>

using namespace std;

template<typename T>
T get_less(const T& a, const T& b)
{
	return a < b ? a : b;
}

template<typename T>
class my_class
{
	T data;
	public:
	my_class(const T& d) : data(d) {}
	T get_data() const { return data; }
};

int main()
{
	cout << get_less(5, 2) << endl;
	my_class a{"string"s};
	cout << a.get_data() << endl;

	vector v{1, 2, 3, 4, 5};
	for (auto i : v)
		cout << i << "|";

	return EXIT_SUCCESS;
}