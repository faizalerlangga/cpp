#include <iostream>
using namespace std;

int main()
{
    float phi = 3.14;
    float r;

    cout << "Masukkan jari-jari (r) : ";
    cin >> r;
    cout << endl;

    cout << "Luas Lingkaran : " << phi * (r * r) << endl;
    cout << "Keliling Lingkaran : " << 2 * phi * r << endl;

    return 0;
}