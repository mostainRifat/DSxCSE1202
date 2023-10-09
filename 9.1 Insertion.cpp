#include <iostream>
using namespace std;

void insertionSort(int A[], int N)
{
    A[0] = -9999999;
    for (int K = 2; K <= N; K++)
    {
        int TEMP = A[K];
        int PTR = K - 1;

        while (TEMP < A[PTR])
        {
            A[PTR + 1] = A[PTR];
            PTR--;
        }
        A[PTR + 1] = TEMP;
    }
}

int main()
{
    int A[] = {0, 5, 2, 1, 6, 3};
    int N = 6;

    cout << "Original Array: ";
    for (int i = 1; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    insertionSort(A, N);
    cout << "Sorted Array: ";
    for (int i = 1; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
