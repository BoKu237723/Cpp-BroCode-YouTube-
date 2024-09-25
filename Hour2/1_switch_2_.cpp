#include <iostream>
int main(){
    char grade;
    std::cout << "What letter grade :";
    std::cin >> grade;
    
    switch (grade){
        case 'A':
        std::cout << "You did great!";
        break;

        case 'B':
        std::cout << "You did good";
        break;

        case 'C':
        std::cout << "You did ok";
        break;

        case 'D':
        std::cout << "You did not do good";
        break;

        case 'E':
        std::cout << "You failed!";
        break;

        default:
        std::cout  << "Only enter in a letter grade (A-F)";

    }
}