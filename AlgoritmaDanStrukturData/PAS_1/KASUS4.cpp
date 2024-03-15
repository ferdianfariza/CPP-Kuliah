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

   // variabel
   int total;
   int input;
   int A[100];
   int sum = 0;
   double avg;

   cout << "Jumlah array: ";
   cin >> total;

   // loop
   for (int i = 1; i <= total; i++)
   {
      cout << "Input ke-" << i << ": ";
      cin >> A[i];
      sum += A[i];
   }
   int largest = A[1];
   int smallest = A[1];
   for (int i = 2; i <= total; i++)
   {
      if (A[i] > largest)
      {
         largest = A[i];
      }
      if (A[i] < smallest)
      {
         smallest = A[i];
      }
   }
   cout << "Hasil Array   : ";
   for (int i = 1; i <= total; i++)
   {
      cout << A[i] << " ";
   }
   cout << endl;
   cout << "Nilai terbesar: " << largest << endl;
   cout << "Nilai terkecil: " << smallest << endl;
   cout << "Jumlah array  : " << sum << endl;

   // casting ke nilai float/integer
   avg = static_cast<double>(sum) / static_cast<double>(total);
   cout << "Rata-rata     : " << avg << endl;

   return 0;
}