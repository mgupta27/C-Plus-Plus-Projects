#include <iostream>
#include <cmath>

#define _USE_MATH_DEFINES

int main();
double my_sine(double angle);

int main(){
    int theta = 1;

    std::cout << "My calculation of sine is: " << my_sine(theta) << std::endl;
    std::cout << "The actual value of sine is: " << sin(theta) << std::endl;
}

double my_sine(double angle){
    double result{angle - angle*angle*angle/6.0 + angle*angle*angle*angle/120.0};
    return result;
}
