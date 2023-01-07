#include <iostream>

int main();

int main(){
    int secret_number{};
    
    std::cout << "Player A: Enter the secret number: ";
    std::cin >> secret_number;

    while(true){
        int guessed_number{};

        std::cout << "Player B: Enter your guess: ";
        std::cin >> guessed_number;

        if(secret_number == guessed_number){
            std::cout << "You guessed the correct number!" << std::endl;
            break;
        }
        else{
            std::cout << "Keep trying" << std::endl;
        }
    }
}