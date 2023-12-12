#include <iostream>
using namespace std;

int main()
{
    int total = 0;
    int i = 1;

    // do-while loop untuk menjumlahkan angka dari 1 hingga 5
    do
    {
        total += i;
        i++;
    } while (i <= 5);

    cout << "Total menggunakan do-while loop : " << total << endl;
}