#include <iostream>

int main();
int flip_even(int input);

int main(){
    int input{-1};
    int f{flip_even(input)};

    std::cout << "in: " << input << "flipped: " << std::hex << f << std::endl;
   
    return 0;
}

int flip_even(int input){
    unsigned int mask{0xAAAAAAAAA};

    return input ^ mask;
}