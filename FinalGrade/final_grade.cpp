#include <iostream>

int main();

int main(){
    int assignment_grade{};
    int quiz_grade{};
    int project_grade{};
    int midterm_grade{};
    int final_grade{};
    double result{};
    std::string status{};

    std::cout << "Input your assignment grade: ";
    std::cin >> assignment_grade;

    std::cout << "Input your quiz grade: ";
    std::cin >> quiz_grade;

    std::cout << "Input your project grade: ";
    std::cin >> project_grade;

    std::cout << "Input your midterm grade: ";
    std::cin >> midterm_grade;

    std::cout << "Input your final grade: ";
    std::cin >> final_grade;

    result = 0*(assignment_grade/100.0) + 
    10*(quiz_grade/20.0) + 
    40*(project_grade/30.0) + 
    20*(midterm_grade/45.0) + 
    30*(final_grade/150.0);

    std::cout << "You received " << result << "% in ECE 150" << std::endl;

    if(result >= 50){
        status = "You have passed the course";
    }
    else if(result >= 40){
        status = "You have failed the course but you are elegible for a make up exam";
    }
    else{
        status = "You have failed the course";
    }

    std::cout << status << std::endl;

    return 0;
}