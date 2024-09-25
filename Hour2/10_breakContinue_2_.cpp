#include <iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 20; i++){
        if (i == 13){
            continue; //skip 13
        }
        cout << i << "\n";
    }
    return 0;
}