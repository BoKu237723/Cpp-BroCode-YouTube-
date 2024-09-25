#include <iostream>
#include <ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int num = (rand() % 20)+1 ; //every random number bewtween 1-20
    cout << num;
    return 0;
}

