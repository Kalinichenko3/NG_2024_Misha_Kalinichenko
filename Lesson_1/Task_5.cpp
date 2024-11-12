#include<iostream>

using namespace std;
int main()

{
    int userInput = 0;
    cout << "enter number: "; 
    cin >> userInput;
    int buffer = userInput;
    for (int vertical = 0; vertical != userInput; vertical++) {
        for (int space = buffer - 1; space != 0; space--) {
            cout << " ";
        }
        buffer--;
        for (int horisontal = 0; horisontal != vertical * 2 + 1; horisontal++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int penyok = 0; penyok != userInput-1; penyok++) {
        cout << " ";
    }
    cout << "*";
    
}