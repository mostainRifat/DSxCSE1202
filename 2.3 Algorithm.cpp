#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n;
    int la[n];
    for (int i = 0; i < n; i++)
        cin >> la[i];

    cin >> k;
    for (int i = k; i < n; i++)
        la[i] = la[i + 1];

    for (int i = 0; i < n - 1; i++)
        cout << la[i] << " ";

    return 0;
}