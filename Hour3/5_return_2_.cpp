#include <iostream>
using namespace std;
string concatStrings(string string1, string string2);
int main(){
    string firstName = "Khine";
    string lastName = "HninAye";
    string fullName = concatStrings(firstName, lastName);
    
    cout << "Hello "<<fullName;
    return 0;
}

string concatStrings(string string1, string string2){
    return string1 + string2;
}