#include <iostream>
using namespace std;
int main(){
    int rows;
    int columns;
    char symbol;

    cout  << "Rows :";
    cin >> rows;

    cout << "Columns :";
    cin >> columns;

    cout << "Enter a symbol to use: ";
    cin >> symbol;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j<= columns; j++){
            cout << symbol << ' ';
        }
        cout << "\n";
    }
    return 0;
}