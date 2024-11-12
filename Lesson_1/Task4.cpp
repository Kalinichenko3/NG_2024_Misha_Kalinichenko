#include <iostream>

using namespace std;

int main()
{
    int zp = 0;

    cout << "Ckol`ko tu zarobatuvayesh?" << endl;
    cin >> zp;

    if (zp < 1000) {
        cout << "Rabotai bolshe!" << endl;
    }
    if (999 < zp) {

        if (zp < 1000000) {
            cout << "Tu molodec!" << endl;
        }

        if (zp > 999999) {
            cout << "Tu millioner!" << endl;
        }
    }
    return 0;
}