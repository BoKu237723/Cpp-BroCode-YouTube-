#include <iostream>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int randNum = rand() % 5 + 1;
    switch(randNum){
        case 1: cout << "You win a sticker!";
        break;
        case 2: cout << "You win $10!";
        break;
        case 3: cout << "You win a T-shirt!";
        break;
        case 4: cout << "You win a shoe!";
        break;
        case 5: cout << "You win a lunch box!";
        break;
        
    }
    return 0;
}

