#include <iostream>

int main();

int main(){
    double a{0.0};
    double b{0.0};
    double c{0.0};
    double x{};

    std::cout << "Input a: ";
    std::cin >> a;

    std::cout << "Input b: ";
    std::cin >> b;

    std::cout << "Input c: ";
    std::cin >> c;

    std::cout << "Input x: ";
    std::cin >> x;

    std::cout << "The result is " << a*x*x + b*x + c << std::endl;

    return 0;
}