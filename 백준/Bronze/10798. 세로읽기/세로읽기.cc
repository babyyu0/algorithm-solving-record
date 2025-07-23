#include <iostream>
#include <string>
#include <vector>

int main() {
	std::vector<std::string> strings;
	std::string str;
	for (int i = 0; i < 5; i++) {
		std::cin >> str;
		for (int j = 0; j < str.size(); j++) {
			if (strings.size() <= j) {
				strings.push_back("");
			}
			strings[j] += str[j];
		}
	}

	for (auto tmp : strings) {
		std::cout << tmp;
	}
}