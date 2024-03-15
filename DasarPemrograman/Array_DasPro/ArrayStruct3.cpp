#include <iostream>
using namespace std;

typedef struct data
{
     string nim;
     string nama;
     string jurusan;
     int umur;
} mahasiswa;

int main()
{
     int i, j, z = 1;
     int baris = 3;
     int kolom = 4;

     cout << "Hai ini program untuk membuat array!" << endl;
     mahasiswa input[baris][kolom];

     for (i = 0; i < baris; i++)
     {
          for (j = 0; j < kolom; j++)
          {
               if (j == 0)
               {
                    cout << z++ << "."
                         << " Masukan nim anda\t: ";
                    getline(cin >> ws, input[i][j].nim);
               }
               else if (j == 1)
               {
                    cout << z++ << "."
                         << " Masukan nama anda\t: ";
                    getline(cin >> ws, input[i][j].nama);
               }
               else if (j == 2)
               {
                    cout << z++ << "."
                         << " Masukan jurusan anda\t: ";
                    getline(cin >> ws, input[i][j].jurusan);
               }

               else
               {
                    cout << z++ << "."
                         << " Masukan umur anda\t: ";
                    cin >> input[i][j].umur;
               }
          }
          if (i < 2)
          {
               {
                    cout << "-----------next-----------";
               }
          }
          else
          {
               cout << "--------------------------";
          }

          cout << endl;
     }

     cout << endl;
     cout << "Tabel Sebagai Berikut: " << endl;
     cout
         << "NIM"
         << "\t| Nama"
         << "\t\t| Jurusan"
         << "\t| Umur" << endl;
     cout << "-----------------------------------------------" << endl;
     for (i = 0; i < baris; i++)
     {
          for (j = 0; j < kolom; j++)
          {
               if (j == 0)
               {
                    cout << input[i][j].nim << "\t";
               }
               else if (j == 1)
               {

                    cout << "| " << input[i][j].nama << "\t"
                                                        "\t";
               }
               else if (j == 2)
               {
                    cout << "| " << input[i][j].jurusan << "\t"
                                                           "\t";
               }
               else
               {
                    cout << "| " << input[i][j].umur;
               }
          }
          cout << endl;
     }

     return 0;
}