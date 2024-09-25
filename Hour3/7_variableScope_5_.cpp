#include <iostream>
using namespace std;
void printNum();

int  myNum = 3;
int main()
{
    int myNum = 1; //global
    printNum();
    cout << "This is from main " << ::myNum << "\n"; //here
    return 0;
}

void printNum(){
    int myNum = 2; //local 
    cout << "This is from void " <<  ::myNum << "\n";
}

// :: use global version