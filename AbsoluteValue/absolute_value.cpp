#include <iostream>

int main();
double my_abs(double num);

int main(){
    std::cout << my_abs(-0.3) << std::endl;
    std::cout << my_abs(0.1) << std::endl;
    std::cout << my_abs(-15.9) << std::endl;
}

double my_abs(double x){
    double result{};
    
    if(x >= 0){
        result = x;
    }
    else{
        result = -x;
    }

    return result;
}