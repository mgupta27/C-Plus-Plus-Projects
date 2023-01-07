#include <iostream>

int main();

int main(){
	char phrase_1[7]{' ', 't', 'h', 'e', 'r', 'e'};
	char phrase_2[6]{'H', 'e', 'l', 'l', 'o', '\0'};

	std::cout << phrase_2 << std::endl;

	return 0;
}
