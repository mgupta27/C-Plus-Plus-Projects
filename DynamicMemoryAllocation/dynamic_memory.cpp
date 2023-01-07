#include <iostream>

int main();
void print_array(double *array, std::size_t const capacity);

int main(){
    std::size_t data_capacity{10};
    double *data{ new double[data_capacity]};
    std::size_t data_size{0};

    while (true)
    {
        double x{};
        std::cout << "Enter a number (<= 0 to quit): ";
        std::cin >> x;

        if(x <= 0.0){
            break;
        }

        if(data_size == data_capacity){
            std::size_t old_capacity{data_capacity};
            double *old_data{data};

            data_capacity *= 2;
            data = new double[data_capacity];

            for(std::size_t k{0}; k < old_capacity; ++k){
                data[k] = old_data[k];
            }

            delete[] old_data;
            old_data = nullptr;
        }

        data[data_size] = x;
        ++data_size;
    }
    
    print_array(data, data_size);
    delete[] data;
    data = nullptr;

    return 0;
}

void print_array(double *array, std::size_t const capacity){
    if(capacity == 0){
        return;
    }

    std::cout << array[0];

    for(std::size_t k{1}; k < capacity; ++k){
        std::cout << ", " << array[k];
    }

    std::cout << std::endl;
}