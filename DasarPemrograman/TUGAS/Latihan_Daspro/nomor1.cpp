#include <iostream>
using namespace std;

int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        if (i == 1 || i == 3)
        {
            for (j = 1; j <= 3; j++)
            {
                cout << "  ";
                cout << "*";
            }
        }
        if (i == 2 || i == 4)
        {
            for (k = 1; k <= 3; k++)
            {
                cout << "*";
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}