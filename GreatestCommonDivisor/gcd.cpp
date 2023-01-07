#include <iostream>

int main();

int main(){
    int num1{}, num2{};

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << std::endl;

    while(num1 % num2 != 0){
        int remainder{num1 % num2};
        num1 = num2;
        num2 = remainder;
    }

    std::cout << "The greatest common divisor is: " << num2 << "." << std::endl;

    return 0;
}