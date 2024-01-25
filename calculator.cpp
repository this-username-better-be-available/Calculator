#include <cmath>
#include <iostream>

int main(){
        int input;
	std::cout << "Input what you would like to do. (Addition: 1. Subtraction: 2. Multiplication: 3. Division: 4) ";
	std::cin >> input;
        if (input == 1){
	float aa;
	float ab;
	std::cout << "addition input number 1: ";
	std::cin >> aa;
	std::cout << "input number 2: ";
	std::cin >> ab;
	float sum = aa + ab;
	std::cout << "sum is: " << sum;
        std::cout << " ";
        } else if (input == 2){
        float sa;
        float sb;
        std::cout << "subtraction input number 1: ";
        std::cin >> sa;
        std::cout << "input number 2: ";
        std::cin >> sb;
        float answer = sa - sb;
        std::cout << "answer is: " << answer;
        std::cout << " ";
        } else if (input == 3){
        float ma;
        float mb;
        std::cout << "multiplication input number 1: ";
        std::cin >> ma;
        std::cout << "input number 2: ";
        std::cin >> mb;
        float answer = ma * mb;
        std::cout << "answer is: " << answer;
        std::cout << " ";
        } else if (input == 4){
	float da;
        float db;
        std::cout << "division input number 1: ";
        std::cin >> da;
        std::cout << "input number 2: ";
        std::cin >> db;
        float answer = da / db;
        std::cout << "answer is: " << answer;
        std::cout << " ";
	} else{
        std::cout << "Not an option please try again";
        std::cout << " ";
        }
}