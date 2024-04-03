#include <iostream>
#include <cstdint>

using namespace std;

int main()
{
	cout << "Char:\t" << sizeof(char) << endl;
	cout << "Int:\t" << sizeof(int) << endl;
	cout << "Long:\t" << sizeof(long) << endl;
	cout << "LL:\t" << sizeof(long long) << endl;
	cout << "Float:\t" << sizeof(float) << endl;
	cout << "Double:\t" << sizeof(double) << endl;
	cout << "---------" << endl;

	cout << "Char16:\t" << sizeof(char16_t) << endl;
	cout << "Char32:\t" << sizeof(char32_t) << endl;
	cout << "Int8:\t" << sizeof(int8_t) << endl;
	cout << "Int16:\t" << sizeof(int16_t) << endl;
	cout << "Int32:\t" << sizeof(int32_t) << endl;
	cout << "Int64:\t" << sizeof(int64_t) << endl;
	cout << "---------" << endl;

	cout << "Decimal:\t" << 10 << endl;
	cout << "Hexadecimal:\t" << 0x10 << endl;
	cout << "Octal:\t" << 010 << endl;
	cout << "Binary:\t" << 0b10 << endl;
	cout << "---------" << endl;

	cout << "Thousand:\t" << 1'000 << endl;
}