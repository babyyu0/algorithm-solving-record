#include <iostream>
#include <vector>

int main() {
	int basketSize = 0, inputCount = 0;
	std::cin >> basketSize >> inputCount;
	std::vector<int> basketNums;
	basketNums.resize(basketSize + 1, 0);

	int begin = 0, end = 0, ballNum = 0;
	for (int i = 0; i < inputCount; i++) {
		std::cin >> begin >> end >> ballNum;

		if (begin > 0 && begin <= end && end <= basketSize) {
			for (int i = begin; i <= end; i++) {
				basketNums[i] = ballNum;
			}
		}
	}

	for (int i = 1; i <= basketSize; i++) {
		std::cout << basketNums[i] << " ";
	}
	std::cout << std::endl;
}