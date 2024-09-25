#include <iostream>
using namespace std;
int main(){
    int number;
    do{
        cout << "Enter positive number :";
        cin >> number;
    }while(number < 0);

    cout << "The numebr is "<<number;
    return 0;
}