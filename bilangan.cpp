#include <iostream>
using namespace std;

int main()
{

    int input;

    cout << "MASUKKAN ANGKA   : ";

    cin >> input;
    cout << endl;

    if (input < 0)
    {
        cout << "BILANGAN NEGATIF" << endl;
    }
    else if (input > 0)
    {
        cout << "BILANGAN POSITIF" << endl;
    }
    else if (input == 0)
    {
        cout << "BILANGAN NOL" << endl;
    }
}