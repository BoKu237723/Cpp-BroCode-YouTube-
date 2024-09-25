#include <iostream>
using namespace std;
int main(){
    string student[] = {"user1" , "user2" , "user3" , "user4"};
    for(string student : student){
        cout << student << "\n";
    }
    return 0;
}