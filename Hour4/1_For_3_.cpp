#include <iostream>
using namespace std;
int main(){
    string student[] = {"user1" , "user2" , "user3" , "user4"};
    for (int i = 0; i < sizeof(student); i++){
        cout << student[i] << "\n";
    }
    return 0;
}