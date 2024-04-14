#include <iostream>

class thing
{
	int id;
public:
	thing(int i) : id(i) {};

	bool operator==(const thing& other) const
	{
		return id == other.id;
	}

	bool operator!=(const thing& other) const
	{
		return !(*this == other);
	}
};

int main()
{
	thing t1{1};
	thing t2{2};
	thing t3{2};

	std::cout << std::boolalpha;
	std::cout << (t1 == t2) << std::endl;
	std::cout << (t1 == t3) << std::endl;
	std::cout << (t2 == t3) << std::endl;

	std::cout << (t1 != t2) << std::endl;
	std::cout << (t1 != t3) << std::endl;
	std::cout << (t2 != t3) << std::endl;
}