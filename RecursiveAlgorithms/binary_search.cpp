#include <iostream>

int main();
std::size_t binary_search( double array[], std::size_t capacity, double value){
    if(capacity <= 2){
        for(std::size_t k{0}; k < capacity; ++k){
            if(array[k] == value){
                return k;
            }
        }

        return capacity;
    }
    else{
        std::size_t middle_index{ capacity/2 };
        
        if(array[middle_index] == value){
            return middle_index;
        }
        else if(value < array[middle_index]){
            std::size_t returned_index{ binary_search(array, middle_index, value) };

            if(returned_index == middle_index){
                return capacity;
            }
            else{
                return returned_index;
            }
        }
        else{
            return binary_search(array + middle_index + 1, capacity - middle_index - 1, value) + middle_index + 1;
        }
    }
}