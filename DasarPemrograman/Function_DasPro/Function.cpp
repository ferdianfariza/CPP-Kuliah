
// fungsi dalam c++

/*
fungsi memiliki input dan output




*/

#include <iostream>
using namespace std;

int hitungpersegi(int s) // parameter
{
     int lpersegi;
     lpersegi = s * s;
     return lpersegi;
}
int hitungpanjang(int p, int l) // parameter
{
     int lpanjang;
     lpanjang = p * l;
     return lpanjang;
}

int main()
{
     int luas1;
     luas1 = hitungpersegi(10);

     cout << luas1 << endl;

     int luas2;
     luas2 = hitungpanjang(10, 19);

     cout << luas2 << ndl;

     cout << "Luas Bangunan: " << luas2 + luas1;

     return 0;
}
