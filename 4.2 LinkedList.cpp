#include <bits/stdc++.h>
using namespace std;
int main()
{
    int info[13] = {0,0,0,201,402,325,101,301,251,0,0,385,0};
    int link[13] = {NULL,NULL,NULL,8,NULL,11,3,5,7,NULL,NULL,4,NULL};

    int ptr = 6 , loc = NULL;
    int item = 251;
    while(ptr != NULL)
    {
        if(info[ptr] == item)
        {
            loc = ptr;
            break;
        }
        ptr=link[ptr];
    }
    cout<<"Location: "<< loc;
}