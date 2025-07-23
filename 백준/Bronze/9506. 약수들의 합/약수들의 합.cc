#include <iostream>
#include <string>

int main() {
	int oriNum = 0, divisorSum = 0;
	std::string printSum;
	std::string printNot(" is NOT perfect.");

	while (true) {
		std::cin >> oriNum;
		if (oriNum == -1) break;

		divisorSum = 1;
		printSum = " = 1";

		for (int i = 2; i <= oriNum / 2; i++) {
			if (oriNum % i == 0) {
				divisorSum += i;
				if (divisorSum > oriNum) break;
				printSum.append(" + " + std::to_string(i));
			}
		}

		std::cout << oriNum << (divisorSum == oriNum ? printSum : printNot) << std::endl;
	}
}