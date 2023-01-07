#include <iostream>


int main();
void print_binary( int const n);

int main(){
    return 0;
}

void print_binary( int const n ){
    if(n < 0){
        std::cout << "-";
        print_binary(-n);
    }
    else if((n == 0) || (n == 1)){
        std::cout << n;
    }
    else{
        print_binary( n/2 );
        std::cout << (n%2);
    }
}