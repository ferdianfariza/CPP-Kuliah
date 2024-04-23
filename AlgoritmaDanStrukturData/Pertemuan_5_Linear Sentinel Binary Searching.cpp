#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
bool linearSearch(int k, int n, int A[])
{
    bool Found = false;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == k)
        {
            Found = true;
        }
    }
    return Found;
}

bool linearSearchSentinel(int k, int n, int a[])
{
    bool Found = false;
    a[n] = k;
    int i = 0;

    while (a[i] != k && i < n)
    {
        i++;
    }

    if (i < n)
    {
        Found = true;
    }

    return Found;
}

bool binarySearch(int k, int n, int a[])
{
    bool Found = false;
    int left = 0;
    int right = n - 1;
    while (left <= right && !Found)
    {
        int mid = (left + right) / 2;
        if (a[mid] == k)
        {
            Found = true;
        }
        else if (a[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return Found;
}

int main()
{
    int arr[] = {12, 52, 104, 29};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Array : ";
    printArray(arr, size);

    int input1;
    cout << "1. Mau Cari apa? (12, 52,104,29): ";
    cin >> input1;
    linearSearch(input1, size, arr);

    if (linearSearch(input1, size, arr) == 1)
    {
        cout << "KEtemuU" << endl;
    }
    else
    {
        cout << "RaonNo" << endl;
    }

    int input2;
    cout << "2. Mau Cari apa? (12, 52,104,29): ";
    cin >> input2;
    linearSearchSentinel(input2, size, arr);

    if (linearSearchSentinel(input2, size, arr) == 1)
    {
        cout << "KEtemuU" << endl;
    }
    else
    {
        cout << "RaonNo" << endl;
    }

    int input3;
    cout << "3. Mau Cari apa? (12, 52,104,29): ";
    cin >> input3;
    binarySearch(input3, size, arr);

    if (binarySearch(input3, size, arr) == 1)
    {
        cout << "KEtemuU" << endl;
    }
    else
    {
        cout << "RaonNo" << endl;
    }

    return 0;
}
