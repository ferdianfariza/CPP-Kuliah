#include <iostream>

using namespace std;

typedef struct data
{
     string nim;
     string nama;
     int tahunlahir;
} mahasiswa;

int main()
{
     int z = 1, i, j, baris, kolom, umur;
     baris = 2;
     kolom = 4;
     mahasiswa udinus[baris][kolom];

     for (i = 0; i < baris; i++)
     {
          for (j = 0; j < kolom; j++)
          {
               if (j == 0)
               {
                    cout << z++ << ". ";
                    cout << "Masukan NIM anda: ";
                    getline(cin >> ws, udinus[i][j].nim);
               }
               else if (j == 1)
               {
                    cout << z++ << ". ";
                    cout << "Masukan nama anda: ";
                    getline(cin >> ws, udinus[i][j].nama);
               }
               else if (j == 2)
               {
                    cout << z++ << ". ";
                    cout << "Masukan tahun lahir anda: ";
                    cin >> udinus[i][j].tahunlahir;
               }
          }
          cout << endl;
     }

     cout << "NIM"
          << "\t"
          << "Nama"
          << "\t"
          << "Lahir"
          << "\t"
          << "Umur" << endl;

     for (i = 0; i < baris; i++)
     {
          umur = 2023 - udinus[i][2].tahunlahir;
          for (j = 0; j < kolom; j++)
          {
               if (j == 0)
               {

                    cout << udinus[i][j].nim << "\t";
               }
               else if (j == 1)
               {

                    cout << udinus[i][j].nama << "\t";
               }
               else if (j == 2)
               {

                    cout << udinus[i][j].tahunlahir << "\t";
               }
               else
               {
                    cout << umur << "\t";
               }
          }
          cout << endl;
     }
     return 0;
}
