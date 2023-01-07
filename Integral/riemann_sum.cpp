#include <iostream>
#include <cmath>

int main();

int main(){
    std::cout.precision(16);

    double phi{};
    double kappa{};
    int n{};

    std::cout << "Enter phi: ";
    std::cin >> phi;

    std::cout << "Enter kappa: ";
    std::cin >> kappa;

    std::cout << "Enter number of subintervals: ";
    std::cin >> n;

    if(n <= 0) {
        return 0;
    }

    /*
    - The width of the interval is [0, phi] is just phi 
    - then the width of each subinterval is width = phi/n
    */

    double width{phi/n};

    // We calculate the area of rectangles that form the area of the fucntion
    //We then add the area's of the rectangle up

    double integral{0.0};
    double theta{width/2.0};

    for(int k{0}; k <= n; ++k){
        integral += width/std::sqrt(1.0 - kappa * kappa * std::sin(theta) * std::sin(theta));
        
        //integral += width * 1.0 * std::sin(theta);
        theta += width;
    }

    std::cout << "The area is " << integral << std::endl;

    return 0;
}