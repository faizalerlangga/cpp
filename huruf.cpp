#include <iostream>
using namespace std;

int main()
{
    char alphabet;

    cout << "=====INPUT KARAKTER=====" << endl;
    cout << "MASUKKAN SEBUAH HURUF ALPHABET  : ";
    cin >> alphabet;

    if (alphabet == 'a' || alphabet == 'i' || alphabet == 'u' || alphabet == 'e' || alphabet == 'o' ||
        alphabet == 'A' || alphabet == 'I' || alphabet == 'U' || alphabet == 'E' || alphabet == 'O')
    {
        cout << "====OUTPUT HASIL=====" << endl;
        cout << "ANDA MEMASUKKAN HURUF VOKAL" << endl;
    }
    else if (alphabet != 'a' || alphabet != 'i' || alphabet != 'u' || alphabet != 'e' || alphabet != 'o' ||
             alphabet != 'A' || alphabet != 'I' || alphabet != 'U' || alphabet != 'E' || alphabet != 'O')
    {
        cout << "====OUTPUT HASIL=====" << endl;
        cout << "ANDA MEMASUKKAN HURUF KONSONAN!" << endl;
    }
    else
    {
        cout << "====OUTPUT HASIL=====" << endl;
        cout << "ANDA MEMASUKKAN KARAKTER SELAIN HURUF!" << endl;
    }
}