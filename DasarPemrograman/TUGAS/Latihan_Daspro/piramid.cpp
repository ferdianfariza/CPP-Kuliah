#include <iostream>
using namespace std;
int main()
{
    int num, i, j, k;
    cout << "PLEASE INPUT NUMBER ANYTHING: ";
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num - i; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= 1 * i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}