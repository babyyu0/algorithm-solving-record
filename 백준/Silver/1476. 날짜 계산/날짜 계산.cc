#include <iostream>

int main() {
	int E, S, M;
	std::cin >> E >> S >> M;
	while (E != S || E != M || S != M) {
		if (E < S || E < M) {
			E += 15;
		}

		if (S < E || S < M) {
			S += 28;
		}

		if (M < S || M < E) {
			M += 19;
		}
	}

	std::cout << E << std::endl;
}