#include <iostream>
using namespace std;

void print(int B[], int size)
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;
}
void bubblesortD(int B[], int n)
{
    int temp, i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (B[j] < B[j + 1]) // descending
            {
                temp = B[j];
                B[j] = B[j + 1];
                B[j + 1] = temp;
            }
        }
    }
};
void bubblesortA(int B[], int n)
{
    int temp, i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (B[j] > B[j + 1]) // ascending
            {
                temp = B[j];
                B[j] = B[j + 1];
                B[j + 1] = temp;
            }
        }
    }
};
int main()
{
    int B[] = {15, 12, 20, 50, 100};
    int size = sizeof(B) / sizeof(B[0]);

    cout << "Array : ";
    print(B, size);
    cout << "-----------------------" << endl;
    if (B[1] < B[5])
    {
        cout << "Ascending : ";
        bubblesortA(B, size);
        print(B, size);
        cout << endl;
    }
    else if (B[1] > B[5])
    {
        cout << "Descending : ";
        bubblesortD(B, size);
        print(B, size);
        cout << endl;
    }

    return 0;
}