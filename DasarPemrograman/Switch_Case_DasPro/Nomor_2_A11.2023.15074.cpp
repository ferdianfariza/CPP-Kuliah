#include <iostream>
using namespace std;
int main()
{
    /*
    Nama  : Ferdian Nur Fariza
    NIM   : A11.2023.15074
    Kelas : A11.4105

    */
    int angka;
    cout<<"--------------------------------" <<endl;
    cout<<"     Program Switch Case        " <<endl;
    cout<<"--------------------------------" <<endl <<endl;
    cout<<"Masukan Angka [1/2/3/4/5/6/7]: "; cin>>angka;
    cout<<endl;
    cout<<angka<<" adalah hari: "<<endl<<endl;
        switch (angka){
        case 1: cout	<<"Senin"	<<endl; 	break;
        case 2: cout	<<"Selasa"	<<endl; 	break;
        case 3: cout	<<"Rabu"	<<endl; 	break;
        case 4: cout	<<"Kamis"	<<endl; 	break;
        case 5: cout	<<"Jumat"	<<endl;	break;
        case 6: cout	<<"Sabtu"	<<endl; 	break;
        case 7: cout	<<"Minggu"	<<endl<<endl; break;

        default:
            cout<<"Maaf, angka yang anda masukan diluar 1-7" << endl;
            cout<<"Silahkan ulangi program" << endl;
        }

    return 0;
}
