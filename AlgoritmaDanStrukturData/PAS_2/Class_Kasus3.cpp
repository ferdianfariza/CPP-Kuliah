#include <iostream>
using namespace std;

/*
Nama    = Ferdian Nur Fariza
Kelas   = A11.4205
NIM     = A11.2023.15074
*/

class setNama
{

public:
    string nama;
    setN()
    {
        cout << "Masukan Nama : ";
        cin >> nama;
    }
    void cetakN()
    {
        cout << "Nama anda : " << nama << endl;
    }
};

class setUmur
{
public:
    int umur;
    int current = 2024;
    setU()
    {
        cout << "Masukan tahun lahir : ";
        cin >> umur;
        umur = current - umur;
    }
    void cetakU()
    {
        cout << "Umur anda : " << umur << endl;
    }
};

class setKota
{
public:
    string kota;
    setK()
    {
        cout << "Masukan Kota : ";
        cin >> kota;
    }
    void cetakK()
    {
        cout << "Kota anda : " << kota << endl;
    }
};

int main()
{
    setNama nama1;
    setUmur umur1;
    setKota kota1;

    nama1.setN();
    umur1.setU();
    kota1.setK();
    cout << endl
         << "Data anda telah terbentuk" << endl;

    nama1.cetakN();
    umur1.cetakU();
    kota1.cetakK();

    return 0;
}