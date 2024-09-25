#include <iostream>
using namespace std;
int main(){

    string languages[][3] = {{"GoLang", "Python", "Kotlin"},
                         {"HTML", "CSS", "JavaScrpit"},
                         {"C", "Assembly", "C++"}};
        
    cout << languages[0][0] << " \n";
    cout << languages[2][0] << " \n";
    cout << languages[0][1] << " \n";
    cout << languages[2][1] << " \n";

    //row / columns
    return 0;
}