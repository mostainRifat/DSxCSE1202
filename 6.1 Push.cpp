#include <bits/stdc++.h>
using namespace std;
const int Max = 100;
int top = -1;
int Stack[Max];

int isFull()
{
    if (top == Max - 1)
        return 1;
    else
        return 0;
}

void push(int x)
{
    if (isFull())
    {
        cout << "OverFlow" << endl;
        return;
    }
    else
        Stack[++top] = x;
}
int main()
{
    int x;
    cin >> x;
    push(x);
    return 0;
}