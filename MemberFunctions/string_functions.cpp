#include <iostream>

int main();

int main(){
    std::string greeting{ "G'day for those of you... " };
    std::cout << greeting << std::endl;

    greeting.resize( greeting.length() - 3 );
    std::cout << greeting << std::endl;

    greeting += " who don't know us... ";
    std::cout << greeting << std::endl;

    greeting.clear();
    std::cout << "\"" << greeting << "\"" << std::endl;

    return 0;
}