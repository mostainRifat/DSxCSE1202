#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, x;
    cin >> n;
    int la[n + 1];
    for (int i = 0; i < n; i++)
        cin >> la[i];

    cin >> k >> x;
    for (int i = n; i >= k; i--)
        la[i + 1] = la[i];
    la[k] = x;

    for (int i = 0; i <= n; i++)
        cout << la[i] << " ";

    return 0;
}