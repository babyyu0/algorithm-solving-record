#include <iostream>

int main() {
	int num1 = 0, num2 = 0;
	while (true) {
		std::cin >> num1 >> num2;
		if (num1 + num2 == 0) {
			break;
		}

		if (num2 % num1 == 0) {
			std::cout << "factor";
		}
		else if (num1 % num2 == 0) {
			std::cout << "multiple";
		}
		else {
			std::cout << "neither";
		}

		std::cout << std::endl;
	}
}