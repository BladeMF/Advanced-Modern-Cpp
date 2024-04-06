#include <iostream>

using namespace std::string_literals;

class String
{
	char* data;
	int size;

public:
	String(const std::string& s) : size(s.size())
	{
		data = new char[size];
		for (int i = 0; i < size; i++)
			data[i] = s[i];
	}

	String(const String& s) : size(s.size)
	{
		data = new char[size];
		for (int i = 0; i < size; i++)
			data[i] = s.data[i];
	}
	~String()
	{
		delete[] data;
	}

	String& operator=(const String& s)
	{
		if (&s == this)
			return *this;

		delete[] data;
		size = s.size;
		data = new char[size];
		for (int i = 0; i < size; i++)
			data[i] = s.data[i];
		return *this;
	}

	int length()
	{
		return size;
	}
};

int main()
{
	String str{"1"s};
	String str2{"Two"s};
	String str3(str2);

	std::cout << "Str2 size = " << str2.length() << std::endl;
	std::cout << "Str3 size = " << str3.length() << std::endl;
	str2 = str2;
	std::cout << "Str2 size = " << str2.length() << std::endl;
	std::cout << "Str size = " << str.length() << std::endl;

	return EXIT_SUCCESS;
}