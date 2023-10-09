#include <bits/stdc++.h>
using namespace std;

void insertionSort(int A[], int N)
{
    A[0] = -9999999;
    for (int k = 2; k <= N; k++)
    {
        int temp = A[k];
        int ptr = k - 1;

        while (temp < A[ptr])
        {
            A[ptr + 1] = A[ptr];
            ptr--;
        }
        A[ptr + 1] = temp;
    }
}

int main()
{
    int N , k;
    cout<<"Enter Number of Element : ";
    cin>>N;

    int A[N];

    cout << "Original Array: ";
    for (int i = 1; i <= N; i++)
    {
        cin >> k;
        A[i] = k;
    }
    //cout << endl;

    insertionSort(A, N);
    cout << "Sorted Array: ";
    for (int i = 1; i <= N; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
