#include<iostream>
using namespace std;

int main(){
    //nama
	cout <<"___________PDP5____________" << endl;
	cout <<"_________Data Diri_________" << endl;
	cout <<"                           " << endl;
	cout <<"Nama  : Ferdian Nur Fariza" << endl;
	cout <<"NIM   : A11.2023.15074" << endl;
	cout <<"Kelas : A11.4105" << endl;
	cout <<"___________________________" << endl<<endl;

    //Kasus 2 Pass or Not
    int nilai;
    cout<<"Masukan Nilai Mahasiswa : ";cin>>nilai;
    if  (nilai>60){
        cout<<"Selamat, ANDA Lulus";
    }
    else if(nilai<=60){
        cout<<"Mohon maaf, ANDA tidak Lulus";
    }
    return 0;
}
