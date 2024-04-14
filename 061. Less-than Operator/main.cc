#include <iostream>
#include <vector>
#include <algorithm>

class thing
{
	std::string name;
	int id;

public:
	thing(std::string name, int id) : name(name), id(id) {};
	thing(const thing& other) = default;

	std::ostream& print(std::ostream& os) const
	{
		os << "{name: " << name << ", id: " << id << "} ";
		return os;
	}

	bool operator<(const thing& other) const
	{
		return id < other.id;
	}
};

int main()
{
	// thing t1("John", 1);
	// thing t2("James", 2);
	// thing t3("James", 2);
	// std::cout << std::boolalpha;
	// std::cout << "t1 < t2 = " << (t1 < t2) << std::endl;
	// std::cout << "t2 < t1 = " << (t2 < t1) << std::endl;
	// std::cout << "t2 < t3 = " << (t2 < t3) << std::endl;
	// std::cout << "t3 < t2 = " << (t3 < t2) << std::endl;
	auto things = std::vector<thing>{thing("John", 3), thing("James", 2), thing("Hannah", 2)};
	sort(things.begin(), things.end());
	for (auto t : things) {
		t.print(std::cout) << std::endl;
	}
	return EXIT_SUCCESS;
}