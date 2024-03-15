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
    //Kasus 3 The Largest
    int a,b;
    cout<<"Masukan Bilangan Pertama : ";cin>>a;
    cout<<"Masukan Bilangan Kedua   : ";cin>>b;
    cout<<endl;

    if (a>b){
        cout<<"Bilangan dengan nilai terbesar adalah : "<<a<<endl;
    }
    else if(a<b){
        cout<<"Bilangan dengan nilai terbesar adalah : "<<b<<endl;
    }
    else if(a=b){
        cout<<"Bilangan tersebut sama nilainya "<<endl;
    }

    return 0;
}
