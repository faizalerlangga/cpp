#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nama[] = {"Ahmad", "Rudi", "Haris", "Fathur", "Ardan"};
    int ukuranArray = sizeof(nama) / sizeof(nama[0]);
    cout << "Array nama before perubahan : ";
    for (int i = 0; i < ukuranArray; ++i)
    {
        cout << nama[i] << ", ";
    }
    cout << endl;
    cout << "Jumlah data array : " << ukuranArray << endl;
    for (int i = 0; i < ukuranArray; ++i)
    {
        if (nama[i] == "Fathur")
        {
            nama[i] = "Budi";
            break;
        }
    }
    cout << "Array nama after perubahan : ";
    for (int i = 0; i < ukuranArray; ++i)
    {
        cout << nama[i] << ", ";
    }
}