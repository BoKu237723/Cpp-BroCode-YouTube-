#include <iostream>
using namespace std;
int main(){
    double gpa = 2.5;
    string name = "Khine";
    char grade = 'D';
    bool student = true;
    char grades[] = {'A', 'B', 'C'};
    cout << sizeof(gpa) << " bytes \n";
    cout << sizeof(name) << " bytes \n";
    cout << sizeof(grade) << " bytes \n";
    cout << sizeof(student) << " bytes \n";
    cout << sizeof(grades) << " byte \n";

    cout << sizeof(grades)/sizeof(char) << " elements\n";
    return 0;
}