#include <iostream>
using namespace std;
int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        if (i == 2 || i == 4)
        {
            cout << "* *";
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