#include <iostream>
using namespace std;
int main(){
    const int size = 100;
    string food[size];
    fill (food, food + size, "HotPot");
    for (string food : food){
        cout << food << "\n";
    }
    return 0;
}