#include <iostream>
using namespace std;

/*
Nama    = Ferdian Nur Fariza
Kelas   = A11.4205
NIM     = A11.2023.15074
*/

class identitas
{
public:
    int umur;
    string nama;
    string asalkota;
    identitas()
    {
        cout << "Program Identitas";
    }
    identitas(int u, string n, string ak)
    {
        umur = u;
        nama = n;
        asalkota = ak;
    }
    /* gunakan ( this-> ) untuk variabel kelas yang sama
    identitas(int umur, string nama, string asalkota)
    {
        this->umur = umur;
        this->nama = nama;
        this->asalkota = asalkota;
    }
    */

    void cetak()
    {
        cout << "Nama saya " << nama << "," << endl
             << "Umur saya " << umur << "," << endl
             << "Saya tinggal di " << asalkota;
    }
};
int main()
{
    identitas id_1(19, "Ferdian Nur Fariza", "Semarang");
    id_1.cetak();
    return 0;
}