#include <iostream>
using namespace std;
int main(){
    // string food[10] = {"HotPot", "HotPot", "HotPot", "HotPot", "HotPot", "HotPot", "HotPot", "HotPot"};
    string food[100];
    fill (food, food + 100, "HotPot");
    for (string food : food){
        cout << food << "\n";
    }
    return 0;
}