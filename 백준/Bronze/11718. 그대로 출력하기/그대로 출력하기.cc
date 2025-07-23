#include <iostream>
#include <string>

int main() {
	std::string str;
	while (true) {
		getline(std::cin, str);
		if (str.empty()) {
			break;
		}

		std::cout << str << std::endl;
	}
	
}