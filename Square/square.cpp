#include <iostream>

int main();

int main(){
    int length{};

    std::cout << "Enter the length of the square: ";
    std::cin >> length;
    std::cout << std::endl;

    for(int rows{1}; rows <= length; ++rows){
        for(int columns{1}; columns <= rows; ++columns){
            std::cout << "* ";
        }

        std::cout << std::endl;
    }

    std::cout << std::endl;

    return 0;
}