#include <iostream>

int main();
bool find(double const array[], std::size_t const capacity, double const value);

int main(){

}

bool find(double const array[], std::size_t const capacity, double const value, std::size_t &index){
    for(std::size_t i{0}; i < capacity; ++i){
        if(array[i] == value){
            index = i;
            return true;
        }
    }

    return false;
}