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

    int CetakX()
    {
        return x;
    }
    int CetakY()
    {
        return y;
    }
    int CetakZ()
    {
        return z;
    }
    int JumlahXYZ()
    {
        return x + y + z;
    }
};

int main()
{
    CetakNilai member1;
    CetakNilai member2;

    member1.x = 10;
    member1.y = 11;
    member1.z = 12;
    member2.x = 20;

    cout << "Cetak Member 1 dan 2: " << endl;
    cout << "Member 1 (x): " << member1.x << endl;
    cout << "Member 2 (x): " << member2.x << endl
         << endl;

    cout << "Member 1 (x)         : " << member1.CetakX() << endl;
    cout << "Member 1 (y)         : " << member1.CetakY() << endl;
    cout << "Member 1 (z)         : " << member1.CetakZ() << endl;

    cout << "Jumlah X Y Z member 1: " << member1.JumlahXYZ();
    return 0;
}