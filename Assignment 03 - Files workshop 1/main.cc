#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

struct language {
	std::string lang;
	std::string designer;
	int date;
};

int main()
{
	std::ifstream file("languages.txt");
	std::string line;
	std::vector<language> languages;

	while (std::getline(file, line)) {
		std::istringstream iss(line);
		language lang;
		iss >> lang.lang >> lang.designer >> lang.date;
		languages.push_back(lang);
	}

	for (auto lang : languages) {
		std::cout << lang.lang << ", " << lang.designer << ", " << lang.date << std::endl;
	}
	return EXIT_SUCCESS;
}