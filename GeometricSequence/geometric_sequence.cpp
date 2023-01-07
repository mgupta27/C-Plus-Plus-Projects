#include <iostream>

int main();

int main(){
    int n{};
    int power_of_two{2};

    std::cout << "Enter an integer: ";
    std::cin >> n;

    if(n < 0){
        return 0;
    }

    std::cout << 1;

    for(int k{1}; k <= n; ++k){
        //Print 2^k prefeixed by a ', '

        std::cout << ", " << power_of_two;

        power_of_two *= 2;
    }
}