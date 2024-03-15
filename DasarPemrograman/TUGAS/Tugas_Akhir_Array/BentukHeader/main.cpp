#include "header.h"

int main()
{
    cout << "+--------GAJI STAF CV.MATIC--------+" << endl;
    cout << "|-------BERDASARKAN GOLONGAN-------|" << endl;
    cout << "+----------+-----------+-----------+" << endl;
    cout << "| GOLONGAN |   GAJI    | TUNJANGAN |" << endl;
    cout << "+----------+-----------+-----------+" << endl;
    cout << "|    1     |   3750    |     750   |" << endl;
    cout << "|    2     |   4200    |    1000   |" << endl;
    cout << "|    3     |   5200    |    1500   |" << endl;
    cout << "|    4     |   6500    |    2500   |" << endl;
    cout << "+----------+-----------+-----------+" << endl
         << endl;
    cout << "------MASUKAN DATA DIBAWAH INI------" << endl;

    int n;
    cout << "Masukan Jumlah Staf : ";
    cin >> n;
    cout << "------------------------------------" << endl;
    staf s[n][6];

    inputdata(s, n);
    displaydata(s, n);

    return 0;
}
