#include <iostream>
using namespace std;
int main(){
    double temp;
    char unit;

    cout << "****** Temperature conversion *****\n";
    cout << "F = Fah \n";
    cout << "C = Cel \n";
    cout << "What do yoant to do :";
    cin >> unit;

    if (unit == 'F' || unit == 'f'){
        cout << "Enter the temperature in Cel :";
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "Temperature is "<< temp << "F\n";
    }
    else if (unit == 'C' || unit == 'c'){
        cout << "Enter the temperature in Fah :";
        cin >> temp;
        temp = (temp - 32) / 1.8;
        cout << "Temperature is "<< temp << "C\n";

    }
    else{
        cout << "Enter only C or F\n";
    }
    return 0;
}