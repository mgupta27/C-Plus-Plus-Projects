#include <iostream>

int main();
double linear_root(double m, double b);

int main(){
    linear_root(1, 2);
}

double linear_root(double m, double b){
    return (double)-b/m;
}