#include <iostream>
using namespace std;

// struct menggunakan typedef
typedef struct data
{
    int nim;
    string nama;
    string jurusan;
    int umur;
} mahasiswa;

// input array
void funcdata(mahasiswa hasil[3][4])
{
    int i, j, z = 1;
    int baris = 3;
    int kolom = 4;
    for (i = 0; i < baris; i++)
    {
        for (j = 0; j < kolom; j++)
        {
            if (j == 0)
            {
                cout << z++ << "."
                     << " Masukan nim anda\t: ";
                cin >> hasil[i][j].nim;
            }
            else if (j == 1)
            {
                cout << z++ << "."
                     << " Masukan nama anda\t: ";
                getline(cin >> ws, hasil[i][j].nama);
            }
            else if (j == 2)
            {
                cout << z++ << "."
                     << " Masukan jurusan anda\t: ";
                getline(cin >> ws, hasil[i][j].jurusan);
            }
            else
            {
                cout << z++ << "."
                     << " Masukan umur anda\t: ";
                cin >> hasil[i][j].umur;
            }
        }
        if (i < 2)
        {
            {
                cout << " .....................NEXT.....................";
            }
        }
        else
        {
            cout << " ..............................................";
        }

        cout << endl;
    }
}

// output data mahasiswa
void coutdata(mahasiswa hasil[3][4])
{
    int i, j, z = 1;
    int baris = 3;
    int kolom = 4;
    cout << endl;
    cout << "Tabel Sebagai Berikut: " << endl;
    cout
        << "No. | "
        << "NIM"
        << "\t| Nama"
        << "\t\t| Jurusan"
        << "\t| Umur" << endl;

    cout << "------------------------------------------------------------" << endl;
    for (i = 0; i < baris; i++)
    {
        cout << z++ << ".  | ";
        for (j = 0; j < kolom; j++)
        {

            if (j == 0)
            {
                cout << hasil[i][j].nim << "\t";
            }
            else if (j == 1)
            {

                cout << "| " << hasil[i][j].nama << "\t";
            }
            else if (j == 2)
            {
                cout << "| " << hasil[i][j].jurusan << "\t"
                                                       "\t";
            }
            else
            {
                cout << "| " << hasil[i][j].umur;
            }
        }

        cout << endl;
    }
}

int main()
{
    cout << " .............Prorgram disusun Oleh............" << endl;
    cout << ": Ferdian Nur Fariza            A11.2023.15074 :" << endl;
    cout << ": Fernandito Ibrahim Maryana    A11.2023.15071 :" << endl;
    cout << " .............................................." << endl<<endl;
    
    cout << " ........Program Input 3 Data Mahasiswa........" << endl;
    cout << ": Ketentuan Input                              :" << endl;
    cout << ": 1. Masukan NIM dengan 5 angka terakhir       :" << endl;
    cout << ": 2. Input Jurusan: TI/DKV/ILKOM               :" << endl;
    cout << " .............................................."<< endl<<endl;

    cout << " ...........Masukan Data Dibawah ini..........." << endl;

    mahasiswa hasil[3][4];
    funcdata(hasil);
    coutdata(hasil);

    return 0;
}
