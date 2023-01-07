#include <iostream>

/*
Print this diamond pattern onto the console

    *           0   4 spaces from the left
   * *          1   3 spaces from the left * 1 spaces from the star
  *   *         2   2 spaces from the left * 2 spaces from the star
 *     *        3   1 spaces from the left * 3 spaces from the star
*       *       4   0 spaces from the left * 4 spaces from the star
 *     * 
  *   * 
   * * 
    *  
    
*/

int main();

int main(){
    int n{};

    std::cout << "Enter n: ";
    std::cin >> n;

    //std::cout << "*" << std::endl;
 
    //We need to print n-1 lines to create the top half

    for(int space{0}; space < n - 1; ++space){
        std::cout << " ";
    }

    std::cout << "*" << std::endl;

    for(int i{1}; i < n; ++i){
        for(int space{0}; space < n - i - 1; ++space){
            std::cout << " ";
        }

        std::cout << "*";

        for(int space{0}; space < 2 * i - 1; space++){
            std::cout << " ";
        }

        std::cout << "*" << std::endl;
    }


    for(int i{1}; i < n - 1; ++i){
        for(int space{0}; space < i; ++space){
            std::cout << " ";
        }
        
        std::cout << "*";

        for(int space{0}; space < 2 * (n - i) - 3; ++space){
            std::cout << " ";
        }

        std::cout << "*" << std::endl;
    }

     for(int space{0}; space < n - 1; ++space){
        std::cout << " ";
    }

    std::cout << "*" << std::endl;
    
}