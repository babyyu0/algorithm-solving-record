#include <iostream>

int main() {
	int tcCount = 0;
	std::cin >> tcCount;

	int cent = 0;
	int division[] = { 25, 10, 5 };
	for (int i = 0; i < tcCount; i++) {
		std::cin >> cent;

		for (const auto& div : division) {
			std::cout << cent / div << " ";
			cent %= div;
		}
		std::cout << cent << std::endl;
	}
}