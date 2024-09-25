#include <iostream>
int main()
{
    bool sunny = false;

    if (sunny != true){ // (!sunny)
        std::cout << "It is cloudy outside!\n";
    }
    else{
        std::cout << "It is sunny outside!\n";
    }
    return 0;
}