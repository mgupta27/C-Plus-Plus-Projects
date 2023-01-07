#include <iostream>

void bubble_sort(double array[], std::size_t capacity);

int main(){
    std::size_t capacity{9};
    double list[] = {9, 7, 8, 4, 5, 6, 1, 3, 2};

    bubble_sort(list, capacity);

    for(int element{0}; element < capacity; ++element){
        std::cout << list[element] << "\t";
    }

    return 0;
}

void bubble_sort(double array[], std::size_t capacity){
    int temp;
    bool swapped;

    for(int i{0}; i < capacity - 1; ++i){
        swapped = false;

        for(int j{0}; j < capacity - 1; ++j){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true;
            }
        }

        if(!swapped){
            break;
        }
    }
}