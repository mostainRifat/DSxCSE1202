#include <iostream>
using namespace std;

void getMin(int A[], int K, int N, int &LOC)
{
    int MIN = A[K];
    LOC = K;
    for (int J = K + 1; J <= N; J++)
    {
        if (MIN > A[J])
        {
            MIN = A[J];
            LOC = J;
        }
    }
}

void selectionSort(int A[], int N)
{
    for (int K = 1; K < N; K++)
    {
        int LOC;
        getMin(A, K, N, LOC);
        int TEMP = A[K];
        A[K] = A[LOC];
        A[LOC] = TEMP;
    }
}

int main()
{
    int A[] = {0, 5, 2, 1, 6, 3};
    int N = sizeof(A) / sizeof(A[0]);

    cout << "Original Array: ";
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    selectionSort(A, N);

    cout << "Sorted Array: ";
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
