#include <iostream>

int main() {
	int curBar = 64;
	int minBar = curBar / 2, wantBar = 0;
	int count = 1;

	std::cin >> wantBar;

	while (curBar > wantBar) {
		if (curBar - minBar >= wantBar) {
			curBar -= minBar;
		}
		else {
			++count;
		}
		minBar /= 2;
	}

	std::cout << count << std::endl;
}