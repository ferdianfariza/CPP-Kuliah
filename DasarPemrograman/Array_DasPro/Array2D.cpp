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
    int i = 0;
    int j = 0;
    int A[3][3];

    cout << "Input Elemen Array: " << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> A[i][j];
            cout << endl;
        }
    }

    cout << "Hasil Array: " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

        cout << "Hasil Array Kolom 0 Baris 1: " << endl;
    cout << A[0][1] << endl;

    cout << "Hasil Matriks Transpos: " << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << A[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
