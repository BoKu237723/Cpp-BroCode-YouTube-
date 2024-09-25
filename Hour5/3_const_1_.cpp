#include <iostream>
using namespace std;
void printInfo(const string name , const int age);

int main(){
    string name = "KhineKninAye";
    int age = 21;
    printInfo(name,age);
    return 0;
}

void printInfo(const string name, const int age){
    // name = " ";    will make error
    // age = 0;       will amke error
    cout << name << "\n";
    cout << age << "\n";
}