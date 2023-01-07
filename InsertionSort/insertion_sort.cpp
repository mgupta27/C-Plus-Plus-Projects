#include <iostream>
#include <cassert>

int main();
void insert( double array[], std::size_t capacity);
void insertion_sort( double array[], std::size_t capacity );
bool is_sorted( double const array[], std::size_t const capacity);

int main(){
    return 0;
}

void insert( double array[], std::size_t capacity){
    assert( is_sorted(array, capacity -1));
    
    double value { array[capacity - 1] };
    std::size_t i{capacity - 1};

    for(i; (i > 0) && (array[i - 1] > value); --i){
        array[i] = array[i - 1];
    }
    
    array[i] = value;
}

void insertion_sort( double array[], std::size_t capacity){
    for(std::size_t i{2}; i <= capacity; ++i){
        insert(array, i);
    }
}

bool is_sorted( double const array[], std::size_t const capacity){
    for(int index{0}; index < capacity - 1; ++index){
        if( array[index] > array[index + 1] ){
            return false;
        }
    }

    return true;
}

void insertion_sort_I( double array[], std::size_t capacity){
    if(capacity <= 1){
        return;
    }
    else{
        insertion_sort_I(array, capacity - 1);
        insert(array, capacity);
    }
}
