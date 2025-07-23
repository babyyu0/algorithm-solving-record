#include <iostream>

int main() {
	int oriNum = 0, divisorCount = 0, divisor = 0;
	std::cin >> oriNum >> divisorCount;

	for (int i = 1; i <= oriNum / 2; i++) {
		if (oriNum % i == 0) {
			if (--divisorCount == 0) {
				divisor = i;
				break;
			}
		}
	}

	if (--divisorCount == 0) {
		divisor = oriNum;
	}

	std::cout << divisor << std::endl;
}