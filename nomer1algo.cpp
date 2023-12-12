#include <iostream>
using namespace std;

int main()
{

    char huruf;
    int angka = 19;
    long angka_long;
    const float angka_koma1 = 19.19;
    const double angka_koma2 = 23.23;

    cout << "===========TUGAS NOMER 1===========" << endl;
    cout << "Masukkan Karakter : ";
    cin >> huruf;
    cout << endl;

    cout << "Masukkan Angka : ";
    cin >> angka;
    cout << endl;

    cout << "Masukkan Angka_Long : ";
    cin >> angka_long;
    cout << endl;

    cout << "===========HASIL NOMER 1===========" << endl;
    cout << "Hasil Karakter		: " << huruf << endl;
    cout << "Hasil Interger		: " << angka << endl;
    cout << "Hasil Angka Long	: " << angka_long << endl;
    cout << "Hasil Float		: " << angka_koma1 << endl;
    cout << "Hasil Double		: " << angka_koma2 << endl;

    return 0;
}