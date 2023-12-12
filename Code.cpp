#include <iostream>
using namespace std;

int main()
{

    string namapanggilan, NO_HP, Kota;

    cout << " Masukan Nama Panggilan	: ";
    cin >> namapanggilan;
    cout << endl;

    cout << " Masukan Nomer HP	: ";
    cin >> NO_HP;
    cout << endl;

    cout << " Masukkan Asal Kota	: ";
    cin >> Kota;
    cout << endl;

    cout << "===Berikut adalah data-data Saya===" << endl;
    cout << "Nama Panggilan		: " << namapanggilan << endl;
    cout << "Nomer HP		: " << NO_HP << endl;
    cout << "Asal Kota		: " << Kota << endl;

    return 0;
}