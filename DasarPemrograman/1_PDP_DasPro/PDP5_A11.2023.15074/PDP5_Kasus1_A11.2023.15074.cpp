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

    //Kasus 1 – Positive or Negative Number
    int number;
    cout<<"Masukan Bilangan : ";cin>>number;
    if  (number<0){
        cout<<"["<<number<<"]"<<" Merupakan bilangan negatif.";
    }
    else{
        cout<<"["<<number<<"]"<<" Merupakan bilangan Positif.";
    }
    return 0;
}
