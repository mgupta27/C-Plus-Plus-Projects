#include <iostream>

int main();
int count_ones(int in);

//It's not a good idea to add a lot of logic into our main function
//We should create a helper function and run it in our main function
int main(){
    int input{5};
    int ones{count_ones(input)};

    std::cout << "in: " << input << " number of ones: " << ones << std::endl;
}

int count_ones(int in){
    int mask{0b0001};
    int count_ones{0};

    for(int i = 0; i < 32; ++i){
        if(in & mask){
            ++count_ones;
        }

        mask <<= 1;
    }

    return count_ones;
}
