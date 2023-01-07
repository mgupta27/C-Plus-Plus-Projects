#include <iostream>

int main();

int main(){
    char input{' '};
    std::cout << "Input character: ";
    std::cin >> input;

    if((input == 'a') || (input == 'e') || (input == 'i') || (input == 'o') || (input == 'u')){
        std::cout << "This is a vowel" << std::endl;
    }
    else{
        std::cout << "This is not a vowel" << std::endl;
    }

    return 0;
}