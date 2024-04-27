#include <iostream>
#include <algorithm>

using namespace std::string_literals;

void find_vowels()
{
	auto s{"This is my string with possibly a lot of vowels."s};
	auto vowels{"aeiou"s};
	auto position{s.begin()};
	--position;
	do {
		position = std::find_first_of(next(position), s.end(), vowels.begin(), vowels.end());
		if (position != s.end()) {
			std::cout << "Found: " << *position << " at position "
				<< std::distance(s.begin(), position) << std::endl;
		}
	} while (position != s.end());
}

void adjacent_find()
{
	auto s{"This is my string with possibly a lot of vowels."s};
	auto found = std::adjacent_find(s.cbegin(), s.cend());
	if (found != s.cend()) {
		std::cout << "Found: " << *found << " at position "
			<< std::distance(s.cbegin(), found) << std::endl;
	}
}

void search_n()
{
	auto s{"This is my string with possibly a lot of vowels."s};
	auto found = std::search_n(s.begin(), s.end(), 2, 's');
	if (found != s.end()) {
		std::cout << "Found: " << *found << " at position "
			<< std::distance(s.begin(), found) << std::endl;
	}
}

void search()
{
	auto s{"This is my string with possibly a lot of vowels."s};
	auto search{"with"s};
	auto found = std::search(s.begin(), s.end(), search.begin(), search.end());
	if (found != s.end()) {
		std::cout << "Found: " << *found << " at position "
			<< std::distance(s.begin(), found) << std::endl;
	}
}

int main()
{
	search();
	return EXIT_SUCCESS;
}