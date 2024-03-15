#include <iostream>
using namespace std;

int main()
{
    int i, j, k, l, m;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4 - i; j++)
        {
            cout << "--";
        }
        if (i == 3)
        {
            cout << "*---*";
        }
        else
        {
            for (k = 1; k <= i; k++)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    for (l = 1; l <= 3; l++)
    {
        for (m = 1; m <= 6; m++)
        {
            cout << "-";
        }
        cout << "*";
        cout << endl;
    }

    return 0;
}