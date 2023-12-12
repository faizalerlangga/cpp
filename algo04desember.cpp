#include <iostream>  // Mendeklarasikan penggunaan pustaka iostream
using namespace std; // Mendeklarasikan penggunaan namespace std

int main() // Mendeklarasikan fungsi utama
{
    int a = 1; // Mendeklarasikan variabel a bertipe integer dan menginisialisasinya dengan nilai 1
    do         // Memulai blok do-while loop. Loop ini akan dijalankan setidaknya sekali karena evaluasi kondisi dilakukan setelah blok dijalankan
    {
        cout << "ini perulangan do-while ke-" << a << endl; // Menampilkan pesan ke layar dengan nilai dari variabel a
        a++;                                                // Meningkatkan nilai variabel a
    } while (a < 3);                                        // Menutup blok do-while dan menentukan kondisi untuk melanjutkan perulangan. Program akan terus berjalan selama nilai a kurang dari 3.
}