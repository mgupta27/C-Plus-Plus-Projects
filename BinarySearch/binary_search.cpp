#include <iostream>
#include <cassert>

int main();
bool is_sorted( double const array[], std::size_t const capacity);


int main(){
    return 0;
}

std::size_t binary_search( double const array[], std::size_t const capacity, double const value){
    assert(is_sorted);

    std::size_t lower_index{0};
    std::size_t upper_index{capacity - 1};

    while((lower_index <= upper_index) && (upper_index < capacity)){
        std::size_t average_index{ (lower_index + upper_index)/2 };

        if(array[average_index] == value){
            return average_index;
        }
        else if(array[average_index] < value){
            lower_index = average_index + 1;
        }
        else{
            upper_index = average_index - 1;
        }
    }

    return capacity;
}


bool is_sorted( double const array[], std::size_t const capacity){
    for(int index{0}; index < capacity - 1; ++index){
        if( array[index] > array[index + 1] ){
            return false;
        }
    }

    return true;
}