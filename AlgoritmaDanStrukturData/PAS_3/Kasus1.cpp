/*
    setiap integer memiliki 4 byte.
    kasus diatas di dalam array memiliki 7: 7*4=28
    sizeof(A)= 28 byte
    sizeof(A[o])= 4 byte
*/

#include <iostream>
using namespace std;

void print(int A[], int size)
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
void bubblesortD(int A[], int n)
{
    int temp, i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (A[j] < A[j + 1]) // descending
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
};
void bubblesortA(int A[], int n)
{
    int temp, i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1]) // ascending
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
};
int main()
{
    int A[] = {8, 4, 3, 7, 6, 2, 1, 5};
    int size = sizeof(A) / sizeof(A[0]);

    cout << "Array : ";
    print(A, size);
    cout << "-----------------------" << endl;
    cout << "Ascending : ";
    bubblesortA(A, size);
    print(A, size);
    cout << endl;
    cout << "Descending : ";
    bubblesortD(A, size);
    print(A, size);
    cout << endl;

    return 0;
}