#include <iostream>

#ifndef MARMOSET_TESTING
int main();
#endif
int * add_element(int *array, std::size_t &capacity, int value_to_add);
int * remove_element(int * array, std::size_t &capacity, int value_to_remove);
void bubble_sort(int *array, std::size_t capacity);
// void print_array(int *array, std::size_t capacity);

#ifndef MARMOSET_TESTING
int main(){
    std::size_t capacity{5};
    int *a_list = { new int[capacity] };

    for(int i{0}; i < capacity; ++i){
        a_list[i] = i + 1;
    }

    a_list = remove_element(a_list, capacity, 4);

    // print_array(a_list, capacity);

    return 0;
}
#endif

int * add_element(int *array, std::size_t &capacity, int value_to_add){ 
    int *a_resized_array = { new int[capacity + 1] };

    for(int i{0}; i < capacity; ++i){
        a_resized_array[i] = array[i];
    }

    delete[] array;
    array = nullptr; 
    
    a_resized_array[capacity] = value_to_add;
    capacity++;

    bubble_sort(a_resized_array, capacity);

    return a_resized_array;
}

int * remove_element(int * array, std::size_t &capacity, int value_to_remove){
    int *a_resized_array = { new int[capacity - 1] };
    int element{0};

    for(int i{0}; i < capacity; i++){
        if(array[i] != value_to_remove){
            a_resized_array[element] = array[i];
            element++;
        }
    }

    delete[] array;
    array = nullptr;

    capacity--;

    bubble_sort(a_resized_array, capacity);

    return a_resized_array;
}

void bubble_sort(int *array, std::size_t capacity){
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

// void print_array(int *array, std::size_t capacity){
//     for(int i{0}; i < capacity; ++i){
//         std::cout << array[i] << "\t";
//     }

//     std::cout << std::endl;
// }