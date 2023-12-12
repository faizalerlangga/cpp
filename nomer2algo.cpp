#include <iostream>
using namespace std;

int main()
{

    string nama;
    int umur;
    float berat_badan;
    char goldar;

    cout << "===========TUGAS NOMER 2===========" << endl;
    cout << "Masukkan Nama		: ";
    cin >> nama;
    cout << endl;

    cout << "Masukkan Umur		: ";
    cin >> umur;
    cout << endl;

    cout << "Masukkan Berat Badan	: ";
    cin >> berat_badan;
    cout << endl;

    cout << "Masukkan Golongan Darah : ";
    cin >> goldar;
    cout << endl;

    cout << "===========HASIL NOMER 2===========" << endl;
    cout << "Nama Saya adalah		: " << nama << endl;
    cout << "Umur Saya adalah		: " << umur << endl;
    cout << "Berat Badan Saya adalah		: " << berat_badan << endl;
    cout << "Golongan Darah Saya adalah	: " << goldar << endl;

    return 0;
}