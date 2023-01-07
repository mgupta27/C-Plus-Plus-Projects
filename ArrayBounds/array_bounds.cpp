#include <iostream>

int main();

int main(){
    int a{1};
    int b[3]{1, 2, 3};
    int c{5};

    //Can't happen because the range of elements is from 0 to 2
    b[3] = 666;

    std::cout << "b[3]: " << b[3] << " c: " << c << std::endl;
}