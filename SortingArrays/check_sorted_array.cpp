#include <iostream>

int main();
bool is_sorted( double const array[], std::size_t const capacity);

int main(){
    return 0;
}

bool is_sorted( double const array[], std::size_t const capacity){
    for(int index{0}; index < capacity - 1; ++index){
        if( array[index] > array[index + 1] ){
            return false;
        }
    }

    return true;
}

