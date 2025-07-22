#include <iostream>
#include <vector>

int main() {
	std::vector<bool> students;
	students.resize(31, false);

	int studentIndex = 0;
	for (int i = 0; i < 28; i++) {
		std::cin >> studentIndex;

		if (studentIndex > 0 && studentIndex <= 30) {
			students[studentIndex] = true;
		}
	}

	int studentCount = 0;
	for (int i = 1; i <= 30 && studentCount < 2; i++) {
		if (!students[i]) {
			std::cout << i << std::endl;
			++studentCount;
		}	
	}
}