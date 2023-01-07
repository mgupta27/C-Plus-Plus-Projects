#include <iostream>

int main();

int main(){
    int n{};

    std::cout << "Enter a positive integer to be factored: ";
    std::cin >> n;

    int possible_factor{2};

    while(n > 1){
        while(n % possible_factor == 0){
            std::cout << possible_factor << ", ";
            n /= possible_factor;
        }

        ++possible_factor;
    }

    return 0;
}