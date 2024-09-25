#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}
int main(){
    int x = 0;
    
    std::cout << x;
    std::cout<<"\n";

    std::cout<<first::x;
    std::cout<<"\n";

    std::cout<<second::x;
    return 0;
}
//namespace provides a solution for preventing name conflicts in large projects