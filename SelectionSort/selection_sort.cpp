#include <iostream>
#include <cassert>


int main();
void selection_sort( double array[], std::size_t capacity);
std::size_t find_max( double array[], std::size_t capacity);
void swap( double &first, double &second ); 

int main(){
    return 0;
}

void selection_sort( double array[], std::size_t capacity){
    for(std::size_t i{capacity - 1}; i > 0; --i){
        std::size_t max_index{ find_max( array, i + 1)};

        swap(array[max_index], array[i]);
    }
}

std::size_t find_max( double array[], std::size_t capacity){
    assert( capacity > 0 );

    std::size_t max_index{0};

    for(std::size_t index{0}; index < capacity; ++index){
        if( array[index] > array[max_index]){
            max_index = index;
        }
    }

    return max_index;
}

void swap( double &first, double &second ){
    double tmp{ first };
    first = second;
    second = tmp;
}

void selection_sort_I( double array[], std::size_t capacity ){
    if(capacity <= 1){
        return;
    }
    else{
        std::size_t max_index{ find_max(array, capacity - 1) };

        if(array[max_index] > array[capacity - 1]){
            std::swap( array[max_index], array[capacity - 1]);
        }

        selection_sort_I(array, capacity - 1);
    }
}