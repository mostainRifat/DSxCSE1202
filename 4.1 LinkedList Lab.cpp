#include<bits/stdc++.h>
using namespace std;
int main()
{
    char info[13] = {' ',' ',' ','U','E','C','R','T','E',' ',' ','S',' '};
    int link[13] = {NULL,NULL,NULL,8,NULL,11,3,5,7,NULL,NULL,4,NULL};
    
    int ptr = 6;

    while(ptr != NULL)
    {   
        cout<<info[ptr];
        ptr = link[ptr];
    }
    return 0;
}