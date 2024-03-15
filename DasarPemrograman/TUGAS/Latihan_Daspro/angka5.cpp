#include <iostream>
using namespace std;

int main()
{
    int i, j, k, l, m;
    for (i = 1; i <= 5; i++)
    {
        if (i == 2)
        {
            cout << "*  ";
        }
        else if (i == 4)
        {
            cout << "  *";
        }
        else
        {
            for (j = 1; j <= 3; j++)
            {
                cout << "*";
            }
        }

        cout << endl;
    }

    return 0;
}