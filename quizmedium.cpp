#include <iostream>
using namespace std;

int main()
{
    int bilangan;

    while (true)
    {
        cout << "Masukkan bilangan (masukkan selain angka genap dan ganjil ketika keluar): ";
        cin >> bilangan;

        if (bilangan == 0)
        {
            cout << "Terima kasih. Program selesai." << endl;
            break;
        }

        if (bilangan % 2 == 0)
        {
            cout << "Bilangan genap" << endl;
        }
        else
        {
            cout << "Bilangan ganjil" << endl;
        }
    }
}