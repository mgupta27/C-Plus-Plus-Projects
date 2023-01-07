#include <iostream>
#include <cmath>

int main();
double find_root(double a, double b, double c, double d, double left_interval, double right_interval);
double find_value(double a, double b, double c, double d, double x);

int main(){
    double a{}, b{}, c{}, d{};
    double lower_bound{}, upper_bound{};
    char repeat{'Y'};;

    while(repeat == 'Y'){
        std::cout << "Enter coefficients (A, B, C, and D):" << std::endl;
        std::cin >> a >> b >> c >> d;
        std::cout << "Enter the lower and upper bound of the search interval: " << std::endl;
        std::cin >> lower_bound >> upper_bound;
        std::cout << "The root found was x = " << find_root(a, b, c, d, lower_bound, upper_bound) << std::endl;
        std::cout << "Do you wish to find another root (Y/N)?" << std::endl;
        std::cin >> repeat;
    }

    std::cout << "Program terminated." << std::endl;

    return 0;
}

double find_root(double a, double b, double c, double d, double left_interval, double right_interval){
    double const small_increment = 0.00001;
    double left_value{find_value(a, b, c, d, left_interval)};
    double right_value{find_value(a, b, c, d, right_interval)};
    
    while(!(left_value > -0.1 && left_value < 0.1)){
        left_interval += small_increment;
        left_value = find_value(a, b, c, d, left_interval);
    }

    while (!(right_value > -0.1 && right_value < 0.1))
    {
        right_interval -= small_increment;
        right_value = find_value(a, b, c, d, right_interval);
    }
    

    return (left_interval + right_interval)/2.0;
}

double find_value(double a, double b, double c, double d, double x){
    double first_term{ a * pow(x, 3.0) };
    double second_term{ b * pow(x, 2.0) };
    double third_term{ c * pow(x, 1.0) };

    return first_term + second_term + third_term + d;
} 