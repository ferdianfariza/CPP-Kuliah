#include<iostream>
//menggunakan <cmath> jika menggunakan operasi pow(a,n)
//dengan cara biasa menggunakan operasi a*a*a
#include<cmath>

using namespace std;

int main(){
	//nama
	cout <<"__________Tugas 3__________" << endl;
	cout <<"_________Data Diri_________" << endl;
	cout <<"                                                " << endl;
	cout <<"Nama  : Ferdian Nur Fariza" << endl;
	cout <<"NIM   : A11.2023.15074" << endl;
	cout <<"Kelas : A11.4105" << endl;
	cout <<"___________________________" << endl<<endl<<endl;



	//mendeklarasi variabel
	//menggunakan tipe data yang memungkinkan dalam bentuk desimal
	float a,b,c,x, y;
	float celcius, fahrenheit, kelvin, reamur;

    cout <<"========= nomor 1 =========" << endl;
    cout <<"        y = a^3 + 7        "<<endl;
    cout <<"===========================" << endl<<endl;

    //memberi input pada nilai a
	cout << "Masukkan nilai a: "; cin >> a;
	cout << "" <<endl;

    //menghitung nilai y
	y=pow(a, 3) + 7;
	cout <<"Hasil y adalah " << y << endl<<endl<<endl<<endl;



	cout <<"========= nomor 2 =========" << endl;
    cout <<"     y = ax^2 + bx + c     "<<endl;
    cout <<"===========================" << endl<<endl<<endl;

    //memberi input pada nilai a,b,c,x
	cout << "Masukkan nilai a: "; cin >> a;
	cout << "Masukkan nilai b: "; cin >> b;
	cout << "Masukkan nilai c: "; cin >> c;
	cout << "Masukkan nilai x: "; cin >> x;
	cout << "" <<endl;

    //menghitung nilai y
    //dengan menggunakan x^2 karena bentuknya a.x^2
    //jika (ax)^2 maka hasilnya akan berbeda dengan operasi dibawah
	y=a*x*x+b*x+c;

	//hasil nilai y
	cout <<"Hasil nilai y adalah " << y << endl<<endl<<endl;


    cout <<"===========================" << endl;
    cout <<"          nomor 3          " << endl;
    cout <<"     Masukkan 5 Angka      "<<endl;
    cout <<"===========================" << endl<<endl<<endl;

    //deklarasikan 5 bilangan
    int bilangan[5];
	int jumlah=0;
	//rata-rata menggunakan float
	float rata_rata;

    for (int i=1; i<=5; i++){
        cout << "Masukkan bilangan ke-" <<i<<":";
        cin >> bilangan [i];
        jumlah += bilangan [i];
    }
    rata_rata = static_cast<float>(jumlah) / 5;

    cout <<"---"<<endl;
    cout << "Jumlah dari 5 bilangan tersebut adalah " << jumlah << endl;
    cout << "Rata-rata dari 5 bilangan tersebut adalah " << rata_rata <<endl;
    cout <<"---"<<endl<<endl<<endl<<endl;


    cout <<"===========================" << endl;
    cout <<"          nomor 4          " << endl;
    cout <<"   Masukkan suhu celcius   "<<endl;
    cout <<"===========================" << endl<<endl<<endl;

    //input celcius
    cout <<"Masukkan suhu dalam Celcius : ";
    cin >> celcius;

    //konversi ke dalam Fahrenheit
    fahrenheit=(9.0/5.0)*celcius +32;
    cout << "Fahrenheit :"<<fahrenheit<<" F"<<endl;
    //konversi ke dalam Kelvin
    kelvin=celcius + 273;
    cout << "Kelvin     :"<<kelvin<<" K"<<endl;
    //konversi ke dalam Reamur
    reamur=(4.0*celcius/5.0);
    cout << "Reamur     :"<<reamur<<" Re"<<endl;


	return 0;
}
