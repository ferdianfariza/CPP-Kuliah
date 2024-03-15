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

typedef struct dataMHS
{
    string nama;
    string nim;
    int umur;

} absen;
int main()
{
    absen absen1 = {"arsen", "DKV", 2023};

    cout << absen1.nama << endl;
    cout << absen1.prodi << endl;
    cout << absen1.tahun << endl;
    return 0;
}
