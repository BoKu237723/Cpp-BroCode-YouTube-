#include <iostream>
using namespace std;
int main(){
    string name;
    cout << " Enter your name : ";
    getline(cin,name);

    name.append("@gmail.com");
    cout << "Your username is now " <<name;
    return 0;
}