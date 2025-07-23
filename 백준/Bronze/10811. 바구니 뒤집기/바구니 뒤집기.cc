#include <iostream>
#include <vector>

int main() {
	int basketSize = 0, inputCount = 0;
	std::cin >> basketSize >> inputCount;
	std::vector<int> basketNums;

	// 0번째 인덱스를 tmp 변수처럼 사용한다.
	for (int i = 0; i <= basketSize; i++) {
		basketNums.push_back(i);
	}

	int idx1 = 0, idx2 = 0;
	for (int i = 0; i < inputCount; i++) {
		std::cin >> idx1 >> idx2;

		if (idx1 > 0 && idx1 <= idx2 && idx2 <= basketSize) {
			while (idx1 < idx2) {
				basketNums[0] = basketNums[idx1];
				basketNums[idx1] = basketNums[idx2];
				basketNums[idx2] = basketNums[0];
				++idx1; --idx2;
			}
		}
	}

	for (int i = 1; i <= basketSize; i++) {
		std::cout << basketNums[i] << " ";
	}
	std::cout << std::endl;
}