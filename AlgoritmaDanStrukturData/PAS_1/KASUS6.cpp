#include <iostream>
using namespace std;

int luas_persegi(int n)
{
   return n * n;
};
int is_ganjil(int n)
{
   if (n % 2 != 0)
   {
      return true;
   }
   else if (n % 2 == 0)
   {
      return false;
   }
};
int is_genap(int n)
{
   if (n % 2 == 0)
   {
      return true;
   }
   else if (n % 2 != 0)
   {
      return false;
   }
};
int sum_n(int n)
{
   int sum = 0;
   for (int i = 1; i <= n; i++)
   {
      cout << i << " ";
      sum += i;
   }
   return sum;
};
double avg_n(int n)
{
   int Sum = sum_n(n);
   return static_cast<double>(Sum) / n;
};

int main()
{
   // nama
   cout << "+----------------------------+" << endl;
   cout << "| Nama  : Ferdian Nur Fariza |" << endl;
   cout << "| NIM   : A11.2023.15074     |" << endl;
   cout << "| Kelas : A11.4205           |" << endl;
   cout << "+----------------------------+" << endl
        << endl;
   cout << luas_persegi(9) << endl;
   cout << is_ganjil(9) << endl;
   cout << is_genap(9) << endl;
   cout << sum_n(4) << endl;
   cout << avg_n(4) << endl;
   return 0;
}