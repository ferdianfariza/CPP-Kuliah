#include <iostream>

using namespace std;

int main()
{
    //nama
	cout <<"___________PDP5____________" << endl;
	cout <<"_________Data Diri_________" << endl;
	cout <<"                           " << endl;
	cout <<"Nama  : Ferdian Nur Fariza" << endl;
	cout <<"NIM   : A11.2023.15074" << endl;
	cout <<"Kelas : A11.4105" << endl;
	cout <<"___________________________" << endl<<endl;

    //Kasus 4 Upah Lembur Karyawan
    double overpay,jamkerja,upahreguler,upah,totalupah;
    cout<<"Masukan Jam Kerja : ";cin>>jamkerja;
    cout<<"Masukan Upah      : ";cin>>upah;

    // Validasi input negatif
    if (jamkerja < 0) {
        jamkerja = 0;
        cout << "Jam kerja negatif. Upah Real Rp0." << endl;
    }
    if (upah < 0) {
        upah = 0;
        cout << "Upah negatif. Upah Real Rp0." << endl;
    }

    //Masukan Rumus Overpay
    if(jamkerja>30){
        overpay=(jamkerja-30)*upah*0.4;
    }
    else if(0<jamkerja<=30){
        overpay=0.2*upah;
    }

    //rumus upah reguler
    upahreguler=jamkerja*upah;

    //rumus total upah
    totalupah=overpay+upahreguler;

    //output total upah
    cout<<"Total Upah   : "<<totalupah<<endl;


    return 0;
}
