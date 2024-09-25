#include <iostream>
using namespace std;
int main(){
    string food[] = {"HotPot", "Coffee", "Ramen"};
    food[0] = "Snack"; //changing
    food[3] = "HotPot"; //changing
    cout << food[0] << "\n";
    cout << food[3];
    return 0;
}