#include <iostream>
#include <cassert>

int main();
double *allocate(double a, double b, std::size_t const capacity);
void manipulate(double *array, std::size_t const capacity);
void deallocate(double *array, std::size_t const capacity);

int main(){
    double *a_data{};
    std::size_t data_capacity{};
    std::cout << "Enter an array capcity: ";
    std::cin >> data_capacity;

    a_data = allocate(0.0, 10.0, data_capacity);

    manipulate(a_data, data_capacity);

    std::cout << a_data[0];

    for(std::size_t k {1}; k < data_capacity; ++k){
        std::cout << ", " << a_data[k];
    }

    deallocate(a_data, data_capacity);
    a_data = nullptr;

    return 0;
}

//The return type (double *allocate) is the return type for this function
double *allocate(double a, double b, std::size_t const capacity){
    assert(capacity >= 2);
    double *array{new double[capacity]};
    
    // This will set array[k] = a + k * delta
    // so that array[0] = a and array[capacity - 1] = b
    double delta{ (b - a)/(capacity - 1.0)};

    for(std::size_t k{0}; k < capacity; ++k){
        array[k] = a + k*delta;
    }

    return array;
}

void manipulate(double *array, std::size_t const capacity){
    while(true){
        std::size_t k{};

        std::cout << "Which entry do you want to change? ";
        std::cin >> k;

        if(k >= capacity){
            return;
        }

        std::cout << "What is the new value? ";
        std::cin >> array[k];
    }
}

void deallocate(double *array, std::size_t const capacity){
    for(std::size_t k{0}; k < capacity; ++k){
        array[k] = 0.0;
    }

    delete[] array;
    array = nullptr;
}