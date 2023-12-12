#include <iostream>  // Mendeklarasikan penggunaan pustaka iostream
using namespace std; // Mendeklarasikan penggunaan namespace std

int main() // Mendeklarasikan fungsi utama
{
    int i = 1;    // Mendeklarasikan variabel i bertipe integer dan menginisialisasinya dengan nilai 1
    while (i < 3) // Memulai blok while loop dengan kondisi i <= 5. Loop akan terus berjalan selama kondisi ini terpenuhi
    {
        cout << "Nilai i : " << i << endl; // Menampilkan pesan ke layar dengan nilai dari variabel i
        i++;                               // Meningkatkan nilai variabel i
    }
}