#include <iostream>
using namespace std;

/*
Nama    = Ferdian Nur Fariza
Kelas   = A11.4205
NIM     = A11.2023.15074
*/

class CetakNilai
{
public:
    int x, y, z;

    CetakNilai() // default
    {
        cout << "Berikut Nilainya :\n";
    }
    CetakNilai(int x, int y, int z) // constructor with parameter
    {
        cout << x << endl;
        cout << y << endl;
        cout << z << endl;
    }

    int JumlahXYZ() // function
    {
        return x + y + z;
    }
};

int main()
{
    // create object
    CetakNilai member1;
    member1.x = 1; // assign
    member1.y = 2;
    member1.z = 3;

    // output xyz
    cout << "x = " << member1.x << endl;
    cout << "y = " << member1.y << endl;
    cout << "z = " << member1.z << endl;

    // access & define
    int jumlah = member1.JumlahXYZ();

    cout << "Jumlah = " << jumlah;

    return 0;
}