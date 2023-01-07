#include <iostream>

int main();
int max_min(int a, int b);

int main(){
    int num1{}, num2{};

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << std::endl;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << std::endl;

    std::cout << "The maximum number is " << max_min(num1, num2) << "." << std::endl;

    std::cout << std::endl;
}

int max_min(int a, int b){
    if(a >= b){
        return a;
    }
    else{
        return b;
    }
}

int max_min(int a, int b, int c){
    if(a >= b && b >= c){
        return a;
    }
    else if(b >= c){
        return b;
    }
    else{
        return c;
    }
}

double max_min_2(double a, double b, double c){
    return max_min(max_min(a, b), c);
}