#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i = 2;i<n;i++)
    {
        //cout<< a[i]<<" ";
        for(int k=i ;k>1;k--)
        {
            if(a[k] < a[k-1])
                swap(a[k],a[k-1]);
        }
        cout<< a[i]<<" ";
    }
    return 0;
}