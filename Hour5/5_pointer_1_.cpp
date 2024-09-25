#include <iostream>
using namespace std;
int main(){
    string name = "KhineHninAye";
    int age = 16;;
    string freePizzas[5] = {"pizza1" , "pizza2", "pizza3", "pizza4"};

    string *pName = &name;
    int *pAge = &age;
    string *pFreepizzas = freePizzas;

    cout << *pName << "\n";
    cout << *pAge << "\n";
    cout << *pFreepizzas << "\n";
    return 0;
}