#include <iostream>
using namespace std;

void happyBirthday(string name, int age);

int main(){
    string name = "Khine";
    int age = 16;
    happyBirthday(name, age); 
    return 0;
}

//have to declare function above main.

void happyBirthday(string name , int age){
    cout << "Happy Birthday " << name << "!\n";
    cout << "You are " << age << " years old now!";
}