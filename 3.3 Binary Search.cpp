#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, loc = -1, mid, x;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    cout << "Enter X:";
    cin >> x;
    while (loc == -1 && lb <= ub)
    {
        mid = (lb + ub) / 2;
        if (x < arr[mid])
            ub = mid - 1;
        else if (x > arr[mid])
            lb = mid + 1;
        else
            loc = mid;
    }

    if (loc == -1)
        cout << "x is not in the array";
    else
        cout << "LOC is the :" << loc;
}