/*
1. Array menyimpan banyak nilai sejenis
2. Array wajib memiliki alokasi (size)
3. yang membedakan ketika deklarasi adalah kode int array[]
4. contoh deklarasi int a[ ]= {1, 2, 3}; data kosong memiliki himpunan \\static memory
                    int a[2];  \\dynamic memeory \\sembarang nilai
                    int a[3]= {1,2,3,}; \\
    bermasalah= int a[n]= {1,2,3,} n nya bermasalah

acces array  |   acces variable
int a=2;         int a[]= {1.3.10}
cout a;          cout<<  a[2];ay

using index to acces array

Print Array
1. Array store many data/multiple data
2. Looping (do-while, for, while)

*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;

    // Get the size of the array from the user
    cout << "Enter the size of the array (N): ";
    cin >> N;

    // Create a vector to store the even integers
    vector<int> A;

    // Take input for even integers
    cout << "Enter " << N << " even integers:\n";
    for (int i = 0; i < N; ++i)
    {
        int num;

        // Ensure the input is even
        do
        {
            cout << "Enter even integer #" << (i + 1) << ": ";
            cin >> num;

            if (num % 2 != 0)
            {
                cout << "Please enter an even integer.\n";
            }
        } while (num % 2 != 0);
        A.push_back(num); // Add the even integer to the array
    }
    // Display the elements of the array
    cout << "Array A: ";
    for (int i : A)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}
