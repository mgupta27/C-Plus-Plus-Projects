#include <iostream>

int main();

int main(){
    std::string line1{ "Goose, goose, goose," };
    std::string line2{ "You bend your neck towards the sky and sing." };
    std::string line3{ "Your white feathers float on the green water, " };
    std::string line4{ "Your red feet push the clear waves." };

    std::cout << line1.length() << std::endl;
    std::cout << line2.length() << std::endl;
    std::cout << line3.length() << std::endl;
    std::cout << line4.length() << std::endl;

    line3.replace(33, 5, "emerald" );
    std::cout << line3.length() << std::endl;
    std::cout << line3 << std::endl;

    return 0;
}