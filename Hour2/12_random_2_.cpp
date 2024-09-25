#include <iostream>
#include <ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int num = rand() % 6 ; //every random number will be devided by 6. So, output will be 6
    cout << num;
    return 0;
}

