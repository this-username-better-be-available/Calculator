#include <cmath>
#include <iostream>

int main() {
	int input;
	std::cout << "input what you would like to do. (addition: 1. subtraction: 2. multiplication: 3. nothing else is working)";
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
} else {
		std::cout << "nothing else is working";
	}
 }
}
