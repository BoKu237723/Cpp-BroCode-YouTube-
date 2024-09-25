#include <iostream>
using namespace std;
int main(){
    string question[] = {"1. What is C++?",
                         "2. What is Python?",
                         "3. What is C?",
                         "4. What is assembly?"};

    string option[][4] = {{"A. A language", "B. Programming Language", "C. Low Level Programming Language"},
                         {"A. A language", "B. Programming Language", "C. Low Level Programming Language"},
                         {"A. A language", "B. Programming Language", "C. Low Level Programming Language"},
                         {"A. A language", "B. Programming Language", "C. Low Level Programming Language"}};
    
    char answerKey[] = {'C','B','A','B'};

    int size = sizeof(question)/sizeof(question[0]);
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++){
        cout << "***********************************\n";
        cout << question[i] << '\n';
        cout << "                ---                \n";
        for(int j = 0; j < sizeof(option[i])/sizeof(option[i][0]); j++){
            cout << option[i][j] << "\n";
        }
        cout << "Your answer :";
        cin >> guess;
        guess = toupper(guess);
        if (guess == answerKey[i]){
            cout << "CORRECT! \n";
            score ++;
        }
        else{
            cout << "WRONG! \n";
            cout << "Answer : "<< answerKey[i] << "\n";
        }
    }    
    cout << "          RESULTS         " << "\n";
    cout << "CORRECT GUESS : " << score << "\n";
    cout << "TOTAL QUESTIONS : " << size << "\n";
    cout << "SCORE" << (score/(double)size)*100 << "%";
    return 0;
}