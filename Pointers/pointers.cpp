#include <iostream>

int main();
int hello();

int main(){
    int *p_number{};
    p_number = new int{42};
    //The operating system finds 4 bytes for the int and initializes it to 42

    std::cout << "Address:\t" << p_number << std::endl;
    std::cout << "Value:\t" << *p_number << std::endl;
    std::cout << sizeof(p_number) << std::endl;

    return 0;
}

int hello(){
    std::cout << "Hello World" << std::endl;
}
