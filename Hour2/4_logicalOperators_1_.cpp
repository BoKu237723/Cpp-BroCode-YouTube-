#include <iostream>
int main()
{
    int temp;
    std::cout << "Enter temperature :";
    std::cin >> temp;

    if(temp > 0 && temp < 30){
        std::cout << "The temperature is good";
    }else{
        std::cout << "The temperature is not good";
    }
    return 0;
}