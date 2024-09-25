//used when we don't know how much memory  we will need. Makes our programs flexible especially when accepting user input

#include <iostream>
using namespace std;
int main(){
    int *pNum = NULL;
    pNum = new int;
    *pNum = 21;
    cout << "address : "<< pNum << '\n';
    cout << "Vale : " << *pNum << '\n';

    delete pNum;
    return 0;
}