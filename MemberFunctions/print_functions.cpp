#include <iostream>
#include <cmath>

int main();

int main(){
    std::cout << M_PI << std::endl;
    std::cout.precision( 16 ); //Makes the value being printed accuarate to the 16th decimal value
    std::cout << M_PI << std::endl;
    std::cout << std::sin( M_PI ) << std::endl;

    std::cout.width( 10 );
    std::cout << 42 << std::endl;
    std::cout << 42 << std::endl;

    std::cout.fill('?');
    std::cout.width(10);
    std::cout << 42 << std::endl;
    std::cout << 42 << std::endl;

    return 0;
}