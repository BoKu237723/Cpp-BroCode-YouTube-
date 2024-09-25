#include <iostream>
using namespace std;
void printNum(int myNum);

int main()
{
    int myNum = 1; //global
    cout <<myNum;
    return 0;
}

void printNum(int myNum){
    int myNum = 2; //local 
    cout << myNum;
}