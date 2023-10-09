#include<bits/stdc++.h>
using namespace std;
int main()
{
    int info[13] = {0,0,0,201,402,325,101,301,251,0,0,385,0};
    int link[13] = {NULL,NULL,NULL,8,NULL,11,3,5,7,NULL,NULL,4,NULL};
    
    int avail,value;
    cin>>avail>>value;

    if (info[avail] != 0)
    {
        cout<<"Overflow"<<endl;
        return 0;
    }

    int ptr = avail;
    info[avail] = value;
    link[avail] = 6;

    while(ptr != 0)
    {
        cout<<info[ptr]<<" ";
        ptr = link[ptr];
    }
    return 0;
}