#include <iostream>

using namespace std;

class Url
{
	string protocol;
	string resource;

public:
	Url(string protocol, string resource) : protocol(protocol), resource(resource) {}

	void display()
	{
		cout << protocol << "://" << resource << endl;
	}
};

int main()
{
	Url u{"http", "www.google.com"};
	u.display();
}