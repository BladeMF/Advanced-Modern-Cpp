#include <iostream>

class thing {
	int num;

public:
	thing(int n) : num(n) {}
	thing(const thing& t) = default;

	thing& operator++()
	{
		++num;
		return *this;
	}

	thing operator++(int i)
	{
		thing t(*this);
		++num;
		return t;
	}

	void print() const
	{
		std::cout << "Num = " << num << std::endl;
	}
};

int main()
{
	thing t{10};
	(++t).print();
	(t++).print();
	t.print();
	return EXIT_SUCCESS;
}