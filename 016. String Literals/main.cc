#include <iostream>

using namespace std;
int main()
{
	string s1 = "some string";
	cout << s1 << endl;
	cout << "String 1"s + "; String 2"s << endl;

	string s2 = R"(<a href="file">C:\Program Files\</a>\n)";
	cout << s2 << endl;

	string s3 = R"x(<a href="file">C:\"Program Files (x86)"\</a>\n)x";
	cout << s3 << endl;
	return EXIT_SUCCESS;
}