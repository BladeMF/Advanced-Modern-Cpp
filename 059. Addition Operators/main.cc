#include <iostream>

class MyNumber {
	double num{0.0};
public:
	MyNumber() = default;
	MyNumber(const MyNumber& other) = default;
	MyNumber(double n) : num(n) {}

	MyNumber& operator+=(const MyNumber& rhs)
	{
		num += rhs.num;
		return *this;
	}

	friend std::ostream& operator<<(std::ostream& os, const MyNumber& rhs);
};

std::ostream& operator<<(std::ostream& os, const MyNumber& obj)
{
	os << obj.num;
	return os;
};

MyNumber operator+(const MyNumber& lhs, const MyNumber& rhs)
{
	auto temp = MyNumber(lhs);
	temp += rhs;
	return temp;
};

int main()
{
	MyNumber num1{2.0};
	std::cout << num1 << std::endl;
	std::cout << (num1 + 3) << std::endl;
	num1 += 5;
	std::cout << num1 << std::endl;

	return EXIT_SUCCESS;
}