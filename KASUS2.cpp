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

   // Kasus 4 Upah Lembur Karyawan
   double overpay, jamkerja, upahreguler, upah, totalupah;
   cout << "Masukan Jam Kerja\t: ";
   cin >> jamkerja;
   cout << "Masukan Upah\t\t: ";
   cin >> upah;

   // Validasi input negatif
   if (jamkerja < 0)
   {
      jamkerja = 0;
      cout << "Jam kerja negatif. Upah Real Rp0." << endl;
   }
   if (upah < 0)
   {
      upah = 0;
      cout << "Upah negatif. Upah Real Rp0." << endl;
   }

   // Rumus Overpay
   if (jamkerja >= 30)
   {
      overpay = (jamkerja - 30) * upah * 0.4;
   }
   else if (jamkerja < 30)
   {
      overpay = (jamkerja - 30) * 0.2 * upah;
   }

   // rumus upah reguler
   upahreguler = jamkerja * upah;

   // rumus total upah
   totalupah = overpay + upahreguler;

   // output
   cout << "Upah Reguler\t\t: " << upahreguler << endl;
   cout << "Overpay\t\t\t: " << overpay << endl;
   cout << "Total Upah\t\t: " << totalupah << endl;

   return 0;
}
