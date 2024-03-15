#include "header.h"

void inputdata(staf s[][6], int n)
{
    int i, j, z = 1;
    for (i = 0; i < n; i++)
    {
        cout << "Data Staf ke-" << i + 1 << endl;
        for (j = 0; j < 6; j++)
        {
            if (j == 0)
            {
                cout << z++ << ". Masukan NIP: ";
                cin >> s[i][j].nip;
            }
            else if (j == 1)
            {
                cout << z++ << ". Masukan Nama: ";
                getline(cin >> ws, s[i][j].nama);
            }
            else if (j == 2)
            {
                cout << z++ << ". Masukan Golongan (1/2/3/4): ";
                cin >> s[i][j].golongan;
            }
        }
        cout << "------------------------------------" << endl;
    }
    cout << endl;
    cout << "Tabel Sebagai Berikut:" << endl;
    cout << "-------------------------------------------------------------" << endl;
}

void displaydata(staf s[][6], int n)
{
    int i, j;
    double totalgaji;
    double totaltunjangan;
    double avg_gaji = 0;
    double avg_tunjangan = 0;
    cout << left << setw(5) << "NIP"
         << left << setw(15) << "NAMA"
         << left << setw(15) << "GOLONGAN"
         << left << setw(15) << "GAJI"
         << left << setw(15) << "TUNJANGAN"
         << endl;

    for (i = 0; i < n; i++)
    {

        for (j = 0; j < 6; j++)
        {
            if (j == 0)
            {
                cout << left << setw(5) << s[i][j].nip;
            }
            else if (j == 1)
            {
                cout << left << setw(15) << s[i][j].nama;
            }
            else if (j == 2)
            {
                cout << left << setw(15) << s[i][j].golongan;
            }
            else if (j == 3)
            {
                if (s[i][2].golongan == 1)
                    s[i][j].gaji = 3750;
                else if (s[i][2].golongan == 2)
                    s[i][j].gaji = 4200;
                else if (s[i][2].golongan == 3)
                    s[i][j].gaji = 5200;
                else if (s[i][2].golongan == 4)
                    s[i][j].gaji = 6500;
                cout << left << setw(15) << s[i][j].gaji;
                totalgaji += s[i][j].gaji;
            }
            else if (j == 4)
            {
                if (s[i][2].golongan == 1)
                    s[i][j].tunjangan = 750;
                else if (s[i][2].golongan == 2)
                    s[i][j].tunjangan = 1000;
                else if (s[i][2].golongan == 3)
                    s[i][j].tunjangan = 1500;
                else if (s[i][2].golongan == 4)
                    s[i][j].tunjangan = 2500;
                cout << left << setw(15) << s[i][j].tunjangan;
                totaltunjangan += s[i][j].tunjangan;
            }
        }
        cout << endl;
    }
    cout << "-------------------------------------------------------------" << endl;

    avg_gaji = totalgaji / n;
    avg_tunjangan = totaltunjangan / n;
    cout << "Rata-Rata Gaji Staf: " << avg_gaji << endl;
    cout << "Rata-Rata Tunjangan Staf: " << avg_tunjangan << endl
         << endl;
}
