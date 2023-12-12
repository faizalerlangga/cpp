#include <iostream>
using namespace std;

int main()
{

    string nomor_barang[3];
    string nama_barang[3];
    float harga_barang[3];
    float total = 0;

    for (int i = 0; i < 3; i++)
    {
        cout << "Masukkan Nomor Barang Ke " << i + 1 << " : ";
        cin >> nomor_barang[i];
        cout << endl;

        if (nomor_barang[i] == "1")
        {
            nama_barang[i] = "Buku";
            harga_barang[i] = 50.000;
        }
        else if (nomor_barang[i] == "2")
        {
            nama_barang[i] = "Pensil";
            harga_barang[i] = 20.000;
        }
        else if (nomor_barang[i] == "3")
        {
            nama_barang[i] = "Penggaris";
            harga_barang[i] = 50.000;
        }
        else if (nomor_barang[i] == "4")
        {
            nama_barang[i] = "Pulpen";
            harga_barang[i] = 30.000;
        }
        else if (nomor_barang[i] == "3")
        {
            nama_barang[i] = "Mouse";
            harga_barang[i] = 100.000;
        }
    }

    cout << "========== HASIL ==========" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Barang Ke : " << i + 1 << endl;
        cout << "Nomor Barang : " << nomor_barang[i] << endl;
        cout << "Nama Barang : " << nama_barang[i] << endl;
        cout << "Harga Barang : " << harga_barang[i] << endl;
        cout << endl;
        total += harga_barang[i];
    }

    if (total >= 200.000)
    {
        cout << "Belanja Kamu Banyak Banget!!!" << endl;
    }
    else if (total >= 100.000 && total < 200.000)
    {
        cout << "Belanja Kamu Lumayan Banyak!!!" << endl;
    }
    else if (total < 100.000)
    {
        cout << "Belanja Kamu Dikit Banget!!!" << endl;
    }
}