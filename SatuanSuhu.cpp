#include <iostream>
using namespace std;

float celciusToReamur(float celcius)
{
    return celcius * 4 / 5;
}

float celciusToFahrenHeit(float celcius)
{
    return (celcius * 9 / 5) + 32;
}

float celciusToKelvin(float celcius)
{
    return celcius + 273;
}

int main()
{
    float celcius;

    cout << "Masukkan Nilai Celcius: ";
    cin >> celcius;

    cout << "---Hasil---" << endl;
    cout << "Celcius Ke Reamur : " << celciusToReamur(celcius) << endl;
    cout << "Celcius Ke Fahrenheit : " << celciusToFahrenHeit(celcius) << endl;
    cout << "Celcius Ke Kelvin : " << celciusToKelvin(celcius) << endl;

    return 0;
}