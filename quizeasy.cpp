#include <iostream>
using namespace std;

int main()
{
    double usd, rupiah;
    float harga = 15000;

    cout << "Masukkan mata uang USD : ";
    cin >> usd;
    cout << endl;

    rupiah = usd * harga;
    cout << "Hasil konversi Mata Uang USD ke Rupiah : Rp. " << rupiah << endl;
}