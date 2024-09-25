#include <iostream>
using namespace std;
int main(){
    int *pointer = nullptr; //this is null pointer
    int x = 123;
    //pointer = &x;

    if (pointer == nullptr) {
        cout << "address was not assigned";
    }else{
        cout << "address was assigned";
        cout << *pointer;
    }
    return 0;
}