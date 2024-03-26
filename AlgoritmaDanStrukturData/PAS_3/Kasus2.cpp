#include <iostream>
using namespace std;

void print(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void addNumbers(int A[], int &size)
{
    for (int i = size; i < size + 3; i++)
    {
        cout << "Masukkan bilangan integer ke-" << i + 1 << ": ";
        cin >> A[i];
    }
    size += 3; // update dari nilai &size (alias size)
}

void bubblesortD(int A[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (A[j] < A[j + 1]) // descending
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

void bubblesortA(int A[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1]) // ascending
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int A[20] = {8, 4, 3, 7, 6, 2, 1, 5};
    int size = 8;

    cout << "Array : ";
    print(A, size);
    cout << "-----------------------" << endl;

    addNumbers(A, size);

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
