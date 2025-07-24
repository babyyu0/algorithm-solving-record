#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	int studentCount = 0, prizeCount = 0;
	std::cin >> studentCount >> prizeCount;

	std::vector<int> scores;
	int score = 0;
	for (int i = 0; i < studentCount; i++) {
		std::cin >> score;
		scores.push_back(score);
	}

	if (studentCount > 0) {
		std::sort(scores.begin(), scores.end());
		if (studentCount <= prizeCount) {
			std::cout << scores[0] << std::endl;
		} else {
			std::cout << scores[studentCount - prizeCount] << std::endl;
		}
		
	}
}