#include <iostream>
using namespace std;

struct dataMHs
{
    string nim;
    string nama;
    int umur;
};
dataMHs mhs;

dataMHs cetak(dataMHs mhs)
{
    mhs.nim = {"A11.2023.15074"};
    mhs.nama = {"Ferdian"};
    mhs.umur = {23};
    return mhs;
};

int main()
{
    mhs = cetak(mhs);
    cout << mhs.nim << " | " << mhs.nama;
    return 0;
}