#include <iostream>
using namespace std;
int main(){

    string languages[][3] = {{"GoLang", "Python", "Kotlin"},
                         {"HTML", "CSS", "JavaScrpit"},
                         {"C", "Assembly", "C++"}};
        
    int rows = sizeof(languages)/sizeof(languages[0]);
    int columns = sizeof(languages[0])/sizeof(languages[0][0]);

    for(int i = 0; i < rows ; i++){
        for(int j = 0; j < columns; j++){
            cout << languages[i][j] << " ";
        }
        cout << " \n";
        }
    return 0;
}