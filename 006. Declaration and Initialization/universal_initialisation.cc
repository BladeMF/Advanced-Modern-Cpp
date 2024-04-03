#include <iostream>
#include <vector>

class Person
{
	int age;

public:
	Person(int age) : age(age) {}
	int get_age() const { return age; }
};

// typedef std::vector<int> IntVec;
using IntVec = std::vector<int>;

int main()
{
	int val1{1};
	bool val2{true};
	Person p{150};

	std::vector<IntVec> vec_of_vec{};

	std::cout << p.get_age() << std::endl;

	return 0;
}