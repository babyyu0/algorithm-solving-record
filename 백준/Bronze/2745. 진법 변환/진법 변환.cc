#include <iostream>
#include <string>

int main() {
	std::string oriNumber; // 진법에 따른 수
	long hexNumber = 0;  // 10진법으로 변경한 수
	int formation = 0; // N진법
	std::cin >> oriNumber >> formation;

	int each, multiplied = 1;
	for (int i = oriNumber.size() - 1; i >= 0; --i) {
		each = oriNumber[i] - 48;
		// 문자일 경우
		if ('A' <= oriNumber[i] && oriNumber[i] <= 'Z') {
			each -= 7;
		}

		hexNumber += (each * multiplied);
		//std::cout << "Cal Number " << each << " to " << each * multiplied << std::endl;
		multiplied *= formation;
	}

	std::cout << hexNumber << std::endl;
}