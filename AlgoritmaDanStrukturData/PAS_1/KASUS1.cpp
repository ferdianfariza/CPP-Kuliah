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

   // Nomor 1,2,3
   int a, b, c, d, x, y, z;
   cout << "1. Masukkan Nilai a: ";
   cin >> a;
   cout << "2. Masukkan Nilai b: ";
   cin >> b;
   cout << "3. Masukkan Nilai c: ";
   cin >> c;
   cout << "4. Masukkan Nilai d: ";
   cin >> d;
   cout << "5. Masukkan Nilai x: ";
   cin >> x;
   y = (a * a * a) + 7;
   z = b * (x * x) + (b * x) + c;
   cout << "Operasi\n";
   cout << "1. y = a^3 + 7          : " << y << "\n";
   cout << "2. y = ax^2 + bx + c    : " << z << "\n";
   cout << "3. a) Jumlah a,b,c,d,x  : " << a + b + c + d + x << "\n";
   cout << "   b) AVG a,b,c,d,x     : " << (a + b + c + d + x) / 5 << "\n";

   // NOMOR 4
   char satuan;
   int suhu, hasil;
   cout << "Masukan Suhu Celcius    : ";
   cin >> suhu;
   cout << "Ingin mengubahnya jadi apa?\n"
        << " a. Fahrenheit\n"
        << " b. Kelvin\n"
        << " c. Reamur\n";
   cout << "(a/b/c) : ";
   cin >> satuan;
   if (satuan == 'a')
   {
      hasil = (9 / 5 * suhu) + 32;
      cout << "Item terpilih (Fahrenheit) : ";
   }
   if (satuan == 'b')
   {
      hasil = suhu + 273;
      cout << "Item terpilih (Kelvin) : ";
   }
   if (satuan == 'c')
   {
      hasil = (4 / 5 * suhu);
      cout << "Item terpilih (Reamur) : ";
   }
   cout << hasil;

   return 0;
}