#include <cmath>
#include <iostream>

int main() {
	int input;
	std::cout << "Input what you would like to do. (Addition: 1. Subtraction: 2. Multiplication: 3. Division: 4)";
	std::cin >> input;
	if (input == 1){
	int aa;
	int ab;
	int sum;
	std::cout << "addition input number 1";
	std::cin >> aa;
	std::cout << "input number 2";
	std::cin >> ab;
	sum = aa + ab;
	std::cout << "sum is: " << sum;
} else if (input == 2) {
        int sa;
        int sb;
        std::cout << "subtraction input number 1: ";
        std::cin >> sa;
        std::cout << "input number 2: ";
        std::cin >> sb;
        int answer = sa - sb;
        std::cout << "answer is: " << answer;
} else if (input == 3) {
        int ma;
        int mb;
        std::cout << "multiplication input number 1: ";
        std::cin >> ma;
        std::cout << "input number 2: ";
        std::cin >> mb;
        int answer = ma * mb;
        std::cout << "answer is: " << answer;
} else if (input == 4) {
	int da;
        int db;
        std::cout << "division input number 1: ";
        std::cin >> da;
        std::cout << "input number 2: ";
        std::cin >> db;
        int answer = da / db;
        std::cout << "answer is: " << answer;
	}
 }
