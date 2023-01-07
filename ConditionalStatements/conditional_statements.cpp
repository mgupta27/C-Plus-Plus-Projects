#include <iostream>

//Function declarations
int main();

//Function definitions
int main() {
    double x{};
    std::cout << "Enter a number 'x': ";
    std::cin >> x;

    if(x >= 0){
        std::cout << "|x| = " << x << std::endl;
    }
    else {
        std::cout << "|x| = " << (-x) << std::endl;
    }

    return 0;
}