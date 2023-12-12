#include <iostream>
using namespace std;

void mahasiswa(string nama, string jurusan, string semester)
{
    cout << nama << " adalah mahasiswa jurusan " << jurusan << " dan semester " << semester;
}

int main()
{
    string nama, jurusan, semester;
    cout << "nama      : ";
    getline(cin, nama);
    cout << "jurusan   : ";
    getline(cin, jurusan);
    cout << "semester  : ";
    getline(cin, semester);

    mahasiswa(nama, jurusan, semester);
}