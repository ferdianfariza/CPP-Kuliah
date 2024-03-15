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
    int A[100];
    int n;
    int genap;

    cout << "Masukan nilai n: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "masukan angka: ";
        cin >> number;
        A[i] = number;
    }
    cout << endl;
    // Pembuktian
    cout << "Hasil Array Sebenarnya: ";
    for (i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Hasil Array 0(genap) 1(ganjil): ";
    for (i = 0; i < n; i++)
    {
        if (A[i] % 2 == 0)
        {
            A[i] = 0;
            cout << A[i] << " ";
        }
        else if (A[i] % 2 != 0)
        {
            A[i] = 1;
            cout << A[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
