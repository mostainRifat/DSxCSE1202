#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,loc=-1;
    cin>>n;
    int a[n];
    for(int i= 0; i< n ;i++)
    {
        cin>>a[i];
    }
    cout<<"have to search : ";
    cin>>x;
    for(int i = 0; i<n;i++)
    {
        if(x==a[i])
        {
            loc = i;
        }
    }
    cout<<"Location is : "<<loc;

}
