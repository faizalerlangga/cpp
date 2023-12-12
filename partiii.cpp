#include <iostream>
using namespace std;

bool lulus(int nilai)
{
    if (nilai > 75)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void data_mahasiswa(string nama, int nilai)
{
    lulus(nilai);
    cout << "nama   : " << nama << endl;
    cout << "nilai  : " << nilai << endl;
    cout << "status : ";
    if (lulus(nilai))
    {
        cout << "lulus" << endl;
    }
    else
    {
        cout << "tidak lulus" << endl;
    }
}

int main()
{
    string nama;
    int nilai;
    cout << "masukkan nama  : ";
    getline(cin, nama);
    cout << "masukkan nilai : ";
    cin >> nilai;
    data_mahasiswa(nama, nilai);
}