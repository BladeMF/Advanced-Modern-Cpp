#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

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
		while (iss.fail()) {
			iss.clear();
			std::string word;
			iss >> word >> lang.date;
			lang.designer += ' ';
			lang.designer += word;
		}
		languages.push_back(lang);
	}

	for (auto lang : languages) {
		std::cout << lang.lang << ", " << lang.designer << ", " << lang.date << std::endl;
	}

	return EXIT_SUCCESS;
}