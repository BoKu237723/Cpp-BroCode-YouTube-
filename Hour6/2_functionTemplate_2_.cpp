#include <iostream>
template <typename T, typename U>

auto max(T x , U y){
    return (x > y) ? x : y;
}
int main(){
    std::cout << max(1.1,20) << '\n'; //string not allowed somehow
    return 0;
}

