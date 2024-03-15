/*
Array 1D =
Array 2D = A[i][j] dimana i adalah baris, j kolom
             ^  ^inner loop
             outer loop

||| = kolom (y)
_
_   = baris (x)
_

*/

#include <iostream>
using namespace std;
int main()
{

    // HASIL ARRAY
    int number, i;
    int A[100];
    int n;

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

    cout << "Genap(0) dan Ganjil(1): ";
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
