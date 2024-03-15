#include <iostream>
using namespace std;

int main()
{
    int i, j, k;
    for (i = 1; i <= 6; i++)
    {
        cout << "*";
    }
    cout << endl;
    for (j = 1; j <= 5; j++)
    {
        for (k = 1; k <= 5 - j; k++)
        {
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }

    return 0;
}