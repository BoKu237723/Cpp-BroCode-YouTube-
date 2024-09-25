#include <iostream>
using namespace std;
int main(){
    string name;
    cout << " Enter your name : ";
    getline(cin,name);

    if(name.empty()){
        cout << "You did't entered your name";
    }else{
        cout << "Welcome "<<name<<"\n";
    }
    return 0;
}