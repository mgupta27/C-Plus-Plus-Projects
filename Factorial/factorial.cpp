#include <iostream>
#include <cassert>

unsigned int factorial(unsigned int n);

unsigned int factorial(unsigned int n){
    assert(n >= 0 && n <= 12);
    
    unsigned int factorial{1};
    
    for(int i{1}; i <= n; ++i){
        factorial *= i;
    }

    return factorial;
}

int main(){
    unsigned int n{};

    std::cout << "Enter a number: ";
    std::cin >> n;

    std::cout << "The factorial of " << n << " is " << factorial(n) << "." <<std::endl;

    return 0;
}
