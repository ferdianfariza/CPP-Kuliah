#include <iostream>
using namespace std;

int main()
{
    int tanggal, jumlah;
    double harga = 12000;
    double diskon = 0.1;
    double tagihan;
    cout << "Harga Buku/pcs sekarang       : Rp 12.000" << endl;
    cout << "------------------Promo------------------" << endl;
    cout << "Beli lebih dari 10 pcs         diskon 10%" << endl;
    cout << "Beli tanggal 2                 diskon 10%" << endl;
    cout << "Beli tanggal 5,10,15,20,25,30  diskon 10%" << endl
         << endl;

    cout << "Masukan jumlah Buku yang dibeli: ";
    cin >> jumlah;
    cout << "Masukan Tanggal (1-31)         : ";
    cin >> tanggal;
    cout << endl;

    if (jumlah > 10)
    {
        harga = harga - (harga * diskon);
    }
    if (tanggal % 5 == 0)
    {
        harga = harga - (harga * diskon);
    }
    if (tanggal == 2)
    {
        harga = harga - (harga * diskon);
    }
    cout << "Total tagihan anda ------- Rp " << harga;
    cout a;
    return 0;
}