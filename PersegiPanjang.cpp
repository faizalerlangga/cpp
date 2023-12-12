#include <iostream>
using namespace std;

int main()
{
    float p, l;

    cout << "Masukkan Panjang (p) : ";
    cin >> p;
    cout << endl;

    cout << "Masukkan Lebar (l) : ";
    cin >> l;
    cout << endl;

    cout << "Luas Persegi Panjang : " << p * l << endl;
    cout << "Keliling Persegi Panjang : " << 2 * (p + l) << endl;

    return 0;
}