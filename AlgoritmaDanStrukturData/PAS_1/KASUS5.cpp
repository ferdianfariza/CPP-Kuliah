#include <iostream>
using namespace std;

struct nilai
{
   int x;
   int y;
};

typedef struct nilai2
{
   int v;
   int z;
} member2;
int main()
{
   // nama
   cout << "+----------------------------+" << endl;
   cout << "| Nama  : Ferdian Nur Fariza |" << endl;
   cout << "| NIM   : A11.2023.15074     |" << endl;
   cout << "| Kelas : A11.4205           |" << endl;
   cout << "+----------------------------+" << endl
        << endl;
   // akses struct
   nilai satu;
   satu.x = 999;
   cout << satu.x << endl;

   // akses typedef
   member2 dua;
   dua.v = 23;
   cout << dua.v;

   return 0;
}
