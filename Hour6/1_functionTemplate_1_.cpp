#include <iostream>
template <typename T>
T max(T x , T y){
    return (x > y) ? x : y;
}
int main(){
    std::cout << max("1.1","2.1") << '\n'; //have to be same data types
    return 0;
}

//function template is for to accept every data types