#include <iostream>
using namespace std;

int luas_persegi(int n)
{
    return n * n;
};

int is_besar(int x)
{
    int i, j, besar = 0;
    for (i = 1; i <= x; i++)
    {
        cout << i << " ";
        if (besar < i)
        {
            besar = i;
        }
    }
    cout << endl;
    cout << "Angka Terbesar: " << endl;
    return besar;
};

int is_kecil(int x)
{
    int i, j, kecil = 1;
    for (i = 1; i <= x; i++)
    {
        cout << i << " ";
        if (kecil >= i)
        {
            kecil = i;
        }
    }
    cout << endl;
    cout << "Angka Terkecil: " << endl;
    return kecil;
};

void is_ganjil(int x)
{
    if (x % 2 == 0)
    {
        cout << "genap" << endl;
    }
    else
    {
        cout << "ganjil" << endl;
    }
};

int topositif(int x)
{
    int y;
    if (x < 0)
    {
        y = x * (-1);
        cout << y;
    }
    else
    {
        y = x;
        cout << y;
    }

    return y;
};

int main()
{
    // luas persegi
    int sisi;
    cout << "Masukan sisi Persegi: ";
    cin >> sisi;
    cout << luas_persegi(sisi) << endl;

    // is besar
    int angka1;
    cout << "Masukan batas N(terbesar): ";
    cin >> angka1;
    cout << is_besar(angka1) << endl;

    // is kecil
    int angka2;
    cout << "Masukan batas N(terkecil): ";
    cin >> angka2;
    cout << is_kecil(angka2) << endl;

    // is ganjil
    int angka3;
    cout << "Masukan angka: ";
    cin >> angka3;
    is_ganjil(angka3);

    // topositive
    int angka4;
    cout << "Masukan angka negatif: ";
    cin >> angka4;
    topositif(angka4);

    return 0;
}