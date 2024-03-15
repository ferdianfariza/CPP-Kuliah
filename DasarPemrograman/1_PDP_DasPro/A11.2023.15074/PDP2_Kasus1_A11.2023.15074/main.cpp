#include<iostream>

using namespace std;

int main(){
	//nama
    cout <<"__________TUGAS 1__________" << endl;
	cout <<"_________Data Diri_________" << endl;
	cout <<"                           " << endl;
	cout <<"Nama  : Ferdian Nur Fariza" << endl;
	cout <<"NIM   : A11.2023.15074" << endl;
	cout <<"Kelas : A11.4105" << endl;
	cout <<"___________________________" << endl<<endl;

	//input a,b, dan hasil (integer)
	int a,b,hasil;

    cout << "-----------Input-----------" <<endl;
	cout << "input nilai a:"; cin >> a;
	cout << "                     a="<<a <<endl;
	cout << "input nilai b:"; cin >> b;
	cout << "                     b="<<b <<endl;
    cout << "---------------------------" <<endl<<endl<<endl;

    //output hasil +, -, /, *
	cout <<"________Hasil Kasus________" << endl<< endl;
	hasil=a+b;
	cout <<"hasil a+b :" <<hasil <<endl;

	hasil=a-b;
	cout <<"hasil a-b :" <<hasil <<endl;

	hasil=a*b;
	cout <<"hasil a*b :" <<hasil <<endl;

	hasil=a/b;
	cout <<"hasil a/b :" <<hasil <<endl;
	cout <<"___________________________" << endl;



	return 0;
}
