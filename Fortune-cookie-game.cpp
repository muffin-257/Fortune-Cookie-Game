#include <iostream>
#include <cstdlib>

int main() {
	srand(time(NULL));
	int num = std::rand() % 6 + 1;

	if (num == 1) {
		std::cout << "Don't pursue happiness – create it.\n";
	}
	else if (num == 2) {
		std::cout << "All things are difficult before they are easy.\n";
	}
	else if (num == 3) {
		std::cout << "The early bird gets the worm, but the second mouse gets the cheese.\n";
	}
	else if (num == 4) {
		std::cout << "Someone in your life needs a letter from you.\n";
	}
	else if (num == 5) {
		std::cout << "The fortune you search for is in another cookie.\n";
	}
	else {
		std::cout << "Help! I'm being held prisoner in a Chinese bakery!\n";
	}
	std::cout << "Your lucky numbers: " << std::rand() % 50 << " ";
	std::cout << std::rand() % 50 << " ";
	std::cout << std::rand() % 50 << " ";
	std::cout << std::rand() % 50 << " ";
	std::cout << std::rand() % 50 << " ";
	std::cout << std::rand() % 50 << " ";
}
