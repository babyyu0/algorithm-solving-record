#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	std::vector<int> numbers;
	int num = 0, sum = 0;
	for (int i = 0; i < 5; i++) {
		std::cin >> num;
		numbers.push_back(num);
		sum += num;
	}

	std::sort(numbers.begin(), numbers.end());
	std::cout << (sum / 5) << std::endl;
	std::cout << numbers[2] << std::endl;
}