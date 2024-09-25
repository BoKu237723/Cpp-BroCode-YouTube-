#include <iostream>
using namespace std;
int main(){
    string name;
    cout << " Enter your name : ";
    getline(cin,name);

    cout << name.insert(3,"@");
    return 0;
}