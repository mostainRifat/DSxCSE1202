#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int k = 1, loc = 1, max = a[1];

    while (k <= n)
    {
        if (max < a[k])
        {
            loc = k;
            max = a[k];
        }
        k++;
    }
    cout << "LOC:" << loc << " " << "MAX: " << max;
    return 0;
}
