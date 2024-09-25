#include <iostream>
int main(){
    std::string name;
    int age;
    std::cout<<"What is your name? : ";
    std::cin >> name;

    std::cout << "What is your age? : ";
    std::cin >> age;

    std::cout<<"Hello "<< name << "!";
    std::cout<<" You are "<< age << " years old";
    return 0;
}