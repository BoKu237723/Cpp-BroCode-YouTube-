#include <iostream>
#include <ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int num = rand();
    cout << num;
    return 0;
}

//this shows random number