#include <iostream>
using namespace std;

int main()
{
   // nama
   cout << "+----------------------------+" << endl;
   cout << "| Nama  : Ferdian Nur Fariza |" << endl;
   cout << "| NIM   : A11.2023.15074     |" << endl;
   cout << "| Kelas : A11.4205           |" << endl;
   cout << "+----------------------------+" << endl
        << endl;

   int i = 50, *p, *q;
   p = &i;
   q = &i;
   *p = 20;
   *q = 100;

   cout << i << endl;
   cout << p << endl;
   cout << q << endl;

   return 0;
}