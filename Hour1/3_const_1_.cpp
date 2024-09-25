#include <iostream>

int main(){
    const double PI = 3.14159;
    //PI = 13.3
    //if you uncomment the above one, there will be error
    std::cout<<PI<<"cm";
    return 0;
}

//if soneone add 'const' the user can't chage any value of it
//make sure that the letters are upper case