#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string kode_barang, nama_barang;
    double harga_satuan, total_harga, total_bayar, diskon = 0;
    int jumlah_barang;

    // Masukkan informasi barang
    cout << "Masukkan kode barang (PK01 / TS02): ";
    cin >> kode_barang;

    cout << "Masukkan nama barang: ";
    cin.ignore();
    getline(cin, nama_barang);

    cout << "Masukkan harga satuan: Rp. ";
    cin >> harga_satuan;

    cout << "Masukkan jumlah yang dibeli: ";
    cin >> jumlah_barang;

    // Hitung total harga
    total_harga = harga_satuan * jumlah_barang;

    // Cek apakah mendapat diskon
    if (jumlah_barang >= 5)
    {
        diskon = 0.125 * total_harga;
        total_bayar = total_harga - diskon;
    }
    else
    {
        total_bayar = total_harga;
    }

    // Tampilkan informasi
    cout << "\nKode Barang: " << kode_barang << endl;
    cout << "Nama Barang: " << nama_barang << endl;
    cout << "Harga Satuan: Rp. " << fixed << setprecision(2) << harga_satuan << endl;
    cout << "Jumlah yang dibeli: " << jumlah_barang << " buah" << endl;
    if (diskon > 0)
    {
        cout << "Diskon 12.5%: Rp. " << fixed << setprecision(2) << diskon << endl;
    }
    cout << "Total Bayar: Rp. " << fixed << setprecision(2) << total_bayar << endl;

    // Menghitung uang kembalian
    double jumlah_uang_dibayarkan;
    cout << "Masukkan jumlah uang yang dibayarkan: Rp. ";
    cin >> jumlah_uang_dibayarkan;

    double uang_kembalian = jumlah_uang_dibayarkan - total_bayar;
    cout << "Jumlah uang kembalian: Rp. " << fixed << setprecision(2) << uang_kembalian << endl;

    return 0;
}