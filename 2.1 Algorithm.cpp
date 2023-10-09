#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n; 
    int la[n];
    int upper_bound = n;
    int lower_bound = 0;
    for(int k=lower_bound;k<upper_bound;k++)
    {
        cin>>la[k];
    }

    for(int i=lower_bound;i<upper_bound;i++)
    {
        cout<<la[i];
    }
    return 0;
}