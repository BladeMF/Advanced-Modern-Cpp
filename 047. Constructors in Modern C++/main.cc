#include <iostream>

class refrigerator {
	// Data members
	int temperature{5};
	bool door_open{true};
	bool power_on{false};

	public:
	void print()
	{
		std::cout << "Temperature: " << temperature << std::endl;
		std::cout << std::boolalpha;
		std::cout << "Door open: " << door_open << std::endl;
		std::cout << "Power on: " << power_on << std::endl;
	}
};

int main()
{
	refrigerator r;
	r.print();
	return EXIT_SUCCESS;
}