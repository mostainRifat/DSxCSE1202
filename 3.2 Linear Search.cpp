#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x , loc = -1;
    cin>>n;
    int arr[n];
    for(int i = 0;i< n;i++)
        cin>>arr[i];
    
    cout<< "Enter x:";
    cin>>x;
    
    for(int k = 0 ;k< n;k++)
    {
        if(x == arr[k])
            loc= k;
    }
    if(loc == -1 )
        cout<<"x is not in the array";
    else 
        cout<<"LOC is the :"<<loc;
    return 0;
}