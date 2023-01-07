#include <iostream>

int main();

int main(){
    double amount_of_bits{};
    double num_of_cd_storage{};
    double num_of_cd_sound{};
    double download_time_hours{};

    amount_of_bits = 3.1*1000*8;
    num_of_cd_storage = (3.1*1000)/700;
    num_of_cd_sound = (421.2*60)/80;
    download_time_hours = (51*700*8)/(75.4 * 3600);

    std::cout << "3.1 KB is " << amount_of_bits << " bits." << std::endl;
    std::cout << "3.1 GB of data can be stored with " << num_of_cd_storage << " CDs." << std::endl;
    std::cout << "421.2 hours of music can be stored with " << num_of_cd_sound << " CDs." << std::endl;
    std::cout << "51 CDs will take " << download_time_hours << " hours to fill." << std::endl;

    return 0;
}