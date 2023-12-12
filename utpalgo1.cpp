#include <iostream>

using namespace std;

int main()
{
    double berat;

    // Input berat dari pengguna
    cout << "Masukkan berat barang (dalam Kg): ";
    cin >> berat;

    // Menentukan kategori barang
    if (berat >= 0 && berat <= 6)
    {
        cout << "Barang Ringan" << endl;
    }
    else if (berat >= 7 && berat <= 11)
    {
        cout << "Barang Lumayan Berat" << endl;
    }
    else if (berat >= 12 && berat <= 24)
    {
        cout << "Barang Berat" << endl;
    }
    else if (berat >= 25 && berat <= 49)
    {
        cout << "Barang Sangat Berat" << endl;
    }
    else if (berat >= 50 && berat <= 99)
    {
        cout << "Barang Super Berat" << endl;
    }
    else if (berat >= 100)
    {
        cout << "Barang Super Super Berat" << endl;
    }
    else
    {
        cout << "ERROR" << endl;
    }

    return 0;
}