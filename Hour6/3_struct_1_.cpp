#include <iostream>
using namespace std;

struct student{
    string name;
    double gpa;
    bool enrolled;
};
int main(){
    student student1;
    student1.name = "User1";
    student1.gpa = 3.1;
    student1.enrolled = true;

    cout << student1.name << '\n';
    cout << student1.gpa << '\n';
    cout << student1.enrolled << '\n';


    student student2;
    student2.name = "User2";
    student2.gpa = 3.2;
    student2.enrolled = false;

    cout << student2.name << '\n';
    cout << student2.gpa << '\n';
    cout << student2.enrolled << '\n';


    student student3;
    student3.name = "User3";
    student3.gpa = 3.3;
    student3.enrolled = true;

    cout << student3.name << '\n';
    cout << student3.gpa << '\n';
    cout << student3.enrolled << '\n';
    return 0;
}