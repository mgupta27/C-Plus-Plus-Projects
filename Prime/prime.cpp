#include <iostream>

int main() {
    int n{};
    std::cout << "Enter an integer: ";
    std::cin >> n;

    bool is_prime{true};

    if(n % 2 == 0){
        is_prime = false;
    }
    else{
        for(int k{2}; k*k < n; k += 2){
            if(n % k == 0){
                is_prime = false;
                break;
            }
        }
    }

    std::cout << is_prime;

}