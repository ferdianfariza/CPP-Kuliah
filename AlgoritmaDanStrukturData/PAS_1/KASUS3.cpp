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

   // operasi
   cout << "Bilangan A harus lebih kecil dari bilangan B" << endl;
   int a, b;
   cout << "Masukan A\t: ";
   cin >> a;
   cout << "Masukan B\t: ";
   cin >> b;

   // loop
   if (a < b)
   {
      while (b >= a)
      {
         cout << b << " ";
         b--;
      }
   }
   else if (a > b)
   {
      b = b * 2;
      cout << "Nilai A mu lebih besar, B*2 = " << b << endl;
      while (b >= a)
      {
         cout << b;
         b--;
      }
   }
   return 0;
}