#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int k = 1; k <= n; k++)
    {
        for(int l=1; l<= n;l++)
        {
            cout<<l<<" ";
        }
        cout<<k<<" "<<endl;
    }
    return 0;
}