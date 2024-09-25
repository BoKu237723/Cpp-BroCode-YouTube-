#include <iostream>
using namespace std;
void printNum();

int main()
{
    int myNum = 1;
    cout <<myNum;
    return 0;
}
void printNum(){
    //cout << myNum;  
    //this is error line which means it can't get myNum from main function
}

//above command can't see other's inside
