#include <iostream>
using namespace std;

// HAK CIPTA GWEH <Maroon, Labkom 2023)

int main()
{
    int a;

    cout << "PROGRAM OPERATOR LOGIKA SEDERHANA BANGET EASY CUY" << endl;

    cout << endl;

    a = 0 && 1;
    cout << "HASIL OPERATOR AND : " << a << endl;
    a = 0 && 0;
    cout << "HASIL OPERATOR AND : " << a << endl;
    a = 1 && 1;
    cout << "HASIL OPERATOR AND : " << a << endl;

    cout << endl;

    a = 0 || 1;
    cout << "HASIL OPERATOR OR : " << a << endl;
    a = 0 || 0;
    cout << "HASIL OPERATOR OR : " << a << endl;
    a = 1 || 1;
    cout << "HASIL OPERATOR OR : " << a << endl;

    cout << endl;

    a = !0;
    cout << "HASIL OPERATOR OR : " << a << endl;
    a = !1;
    cout << "HASIL OPERATOR OR : " << a << endl;

    return 0;
}