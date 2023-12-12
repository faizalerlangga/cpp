#include <iostream>
using namespace std;

int main()
{
    float a, t;
    float sisiA, sisiB, sisiC;

    cout << "Masukkan Alas (a) : ";
    cin >> a;
    cout << endl;

    cout << "Masukkan Tinggi (t) : ";
    cin >> t;
    cout << endl;

    cout << "Masukkan Sisi A : ";
    cin >> sisiA;
    cout << endl;

    cout << "Masukkan Sisi B : ";
    cin >> sisiB;
    cout << endl;

    cout << "Masukkan Sisi C : ";
    cin >> sisiC;
    cout << endl;

    cout << "Luas Segitiga : " << 0.5 * (a * t) << endl;
    cout << "Keliling Segitiga : " << sisiA + sisiB + sisiC << endl;

    return 0;
}