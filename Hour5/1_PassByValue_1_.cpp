#include <iostream>
using namespace std;

int main(){
    string x = "Kool-Aid";
    string y = "Water";
    string temp;

    temp = x;
    x = y;
    y = temp;

    cout << "X: " << x << '\n';
    cout << "Y: " << y << '\n';
    return 0;
}