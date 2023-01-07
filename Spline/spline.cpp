#include <iostream>
#include <cmath>
#include <cassert>

#define _USE_MATH_DEFINES

int main();
double spline(double x);

int main(){
    for(int k{0}; k <= 10; ++k){
        std::cout << spline(M_PI_2*(0.1*k)) << std::endl;
    }

    std::cout << std::endl;

    std::cout << M_PI << std::endl;
    std::cout << M_PI_2 << std::endl;
    std::cout << M_PI_4 << std::endl;
}

double spline(double x){
    assert(x >= 0.0 && x <= M_PI_2);

    return 4.0*x*x/(M_PI*M_PI)*(x - 4/M_PI*x - M_PI + 3.0) + x;
}
