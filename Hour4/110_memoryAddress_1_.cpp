#include <iostream>
using namespace std;
int main(){
    string name = "KhineHninAye";
    string usName = "KhineHninAye";
    int age = 16;
    int heigh = 16;
    bool user = true;

    cout << &name << '\n';
    cout << &usName << '\n'; //not same like python
    cout << &age << '\n';
    cout << &heigh << '\n'; //not same like python
    cout << &user << '\n';
}