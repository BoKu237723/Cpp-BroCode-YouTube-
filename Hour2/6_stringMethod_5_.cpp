#include <iostream>
using namespace std;
int main(){
    string name;
    cout << " Enter your name : ";
    getline(cin,name);

    cout << name.at(3); //index
    return 0;
}