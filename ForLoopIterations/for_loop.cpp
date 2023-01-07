#include <iostream>

int main();

int main(){
    int startNumber{}, stopNumber{};
    int iterations{};

    std::cout << "Enter the starting number: ";
    std::cin >> startNumber;
    

    std::cout << "Enter the stopping number: ";
    std::cin >> stopNumber;

    std::cout << std::endl;

    for(int k{startNumber}; k <= stopNumber; ++k){
        iterations += 1;
    }

    std::cout << "The number of iterations is: " << iterations << ". " << std::endl;
}