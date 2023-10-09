#include<bits/stdc++.h>
using namespace std;
int main()
{
    int info[13] = {0,0,0,201,402,325,101,301,251,0,0,385,0};
    int link[13] = {NULL,NULL,NULL,8,NULL,11,3,5,7,NULL,NULL,4,NULL};

    int item = 201 , loc = NULL;
    int ptr = 6;
    while(ptr != NULL)
    {
        if (item != info[ptr])
            ptr = link[ptr];
        else if( item == info[ptr])
        {
            loc = ptr;
            break;
        }
    }
    cout<<"Location :" <<loc;
    return 0;
}
