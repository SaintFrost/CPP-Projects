#include <iostream>

using namespace std;

int main(){

    char userInput;

    cout << "Please enter a character : ";
    cin >> userInput;

    for (int i = 0; i < 10; i++){

        for (int j = 0; j < 20; j++){
            cout << userInput;
        }
        cout << endl;
    }

    return 0;
}