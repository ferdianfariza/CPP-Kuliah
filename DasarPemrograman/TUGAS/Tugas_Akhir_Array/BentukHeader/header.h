#include <iostream>
#include <iomanip>

using namespace std;

typedef struct datastaf
{
    int nip;
    string nama;
    int golongan;
    int gaji;
    int tunjangan;
    int total;
} staf;

void inputdata(staf s[][6], int n);
void displaydata(staf s[][6], int n);

