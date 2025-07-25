#include <iostream>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <vector>

int main() {
	int count = 0;
	std::cin >> count;

	std::unordered_set<std::string> workerSet;
	std::string name = "", enter = "";
	for (int i = 0; i < count; i++) {
		std::cin >> name >> enter;
		
		switch (enter[0]) {
		case 'e':
			workerSet.insert(name);
			break;
		case 'l':
			workerSet.erase(name);
			break;
		}
	}

	std::vector<std::string> workers(workerSet.begin(), workerSet.end());
	std::sort(workers.begin(), workers.end(), std::greater<>());
	for (const auto& worker : workers) {
		std::cout << worker << '\n';
	}
}