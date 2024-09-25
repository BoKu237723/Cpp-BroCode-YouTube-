#include <iostream>
using namespace std;
int main(){
    string name;
    cout << " Enter your name : ";
    cin >> name;

    if(name.length() > 12){
        cout << "Name can't be over 12 characters";
    }else{
        cout << "Welcome "<<name<<"\n";
    }
    return 0;
}