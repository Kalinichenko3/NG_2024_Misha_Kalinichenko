#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "-------------------" << endl
        << "Vvedite pervoe chislo: " ;
    cin >> a;
    cout << "Vvedite vtoroe chislo: ";
    cin >> b;
        

    cout << "-------------------" << endl
        << "1 - summa" << endl 
        << "2 - raznica" << endl
        << "3 - umnogenie" << endl
        << "4 - delenie" << endl 
        <<  "-------------------" << endl
        << "Vvedite deistwie: " << endl;
    cin >> c;
    switch(c)
    {
    case 1:
        cout << a + b;
        break;
    case 2:
        cout << a - b;
        break;
    case 3:
        cout << a * b;
        break;
    case 4:
        cout << a / b;
        break;
    default:
        cout << "eror";
    }
    return 0;
}
