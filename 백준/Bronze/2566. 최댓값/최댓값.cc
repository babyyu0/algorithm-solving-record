#include <iostream>

int main() {
	int inputNum = 0, maxNum = 0;
	int r = 0, c = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			std::cin >> inputNum;
			if (inputNum > maxNum) {
				r = i; c = j;
				maxNum = inputNum;
			}
		}
	}

	std::cout << maxNum << std::endl;
	std::cout << (r + 1) << " " << (c + 1) << std::endl;
}