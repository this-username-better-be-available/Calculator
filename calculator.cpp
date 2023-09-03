#include <cmath>
#include <iostream>

int main() {
	int input;
	std::cout << "input what you would like to do. (addition: 1. nothing else is working)";
	std::cin >> input;
	if (input == 1) {
	int a;
	int b;
	int sum;
	std::cout << "addition input number 1";
	std::cin >> a;
	std::cout << "input number 2";
	std::cin >> b;
	sum = a + b;
	std::cout << "sum is: " << sum;
	} else {
		std::cout << "nothing else is working";
	}
}