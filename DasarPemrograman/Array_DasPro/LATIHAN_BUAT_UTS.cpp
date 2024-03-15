/*
1. Array menyimpan banyak nilai sejenis
2. Array wajib memiliki alokasi (size)
3. yang membedakan ketika deklarasi adalah kode int array[]
4. contoh deklarasi int a[ ]= {1, 2, 3}; data kosong memiliki himpunan \\static memory
                    int a[2];  \\dynamic memeory
                    int a[3]= {1,2,3,}; \\
    bermasalah= int a[n]= {1,2,3,} n nya bermasalah

acces array  |   acces variable
int a=2;         int a[]= {1.3.10}
cout a;          cout<<  a[2];ay

using index to acces array

Print Array
1. Array store many data/multiple data
2. Looping (do-while, for, while)

*/

#include <iostream>
using namespace std;
int main()
{

    // HASIL ARRAY
    int number, i;
    double rata;
    int A[5];
    for (i = 0; i < 5; i++)
    {
        cout << "masukan angka: ";
        cin >> number;
        A[i] = number;
    }
    cout << "Hasil Array: ";
    for (i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }

    // NILAI TERBESAR
    int max = A[0];
    for (i = 0; i < 5; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    cout << endl
         << "nilai Terbesar: " << max;

    // NILAI TERKECIL
    int min = A[0];
    for (i = 0; i < 5; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    cout << endl
         << "Nilai Terkecil: " << min;

    // JUMLAH ARRAY
    cout << endl
         << "Jumlah Array: "
         << A[0] + A[1] + A[2] + A[3] + A[4];

    // RATA-RATA ARRAY (FLOAT)
    rata = (A[0] + A[1] + A[2] + A[3] + A[4]) / i;
    cout << endl
         << "Rata-Rata: "
         << rata;
    return 0;
}
