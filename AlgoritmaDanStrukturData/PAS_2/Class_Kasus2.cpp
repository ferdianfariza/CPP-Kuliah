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
    // setx y z
    void setX(int nilai)
    {
        x = nilai;
    };
    void setY(int nilai)
    {
        y = nilai;
    };
    void setZ(int nilai)
    {
        z = nilai;
    };
};

int main()
{
    CetakNilai member1;

    member1.setX(10);
    member1.setY(11);
    member1.setZ(12);

    cout << "Member 1 (x)         : " << member1.CetakX() << endl;
    cout << "Member 1 (y)         : " << member1.CetakY() << endl;
    cout << "Member 1 (z)         : " << member1.CetakZ() << endl;

    cout << "Jumlah X Y Z member 1: " << member1.JumlahXYZ();
    return 0;
}