#include <iostream>

int main() {
	int starCount = -1, maxCount = 0;
	std::cin >> maxCount;

	for (int i = 0; i < maxCount; i++) {
		starCount += 2;
		for (int j = 1; j < maxCount - i; j++) {
			std::cout << " ";
		}
		for (int j = 0; j < starCount; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	for (int i = 1; i < maxCount; i++) {
		starCount -= 2;
		for (int j = 0; j < i; j++) {
			std::cout << " ";
		}
		for (int j = 0; j < starCount; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	
}