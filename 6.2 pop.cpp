#include <bits/stdc++.h>
using namespace std;
const int Maxx = 100;
int top = -1;
int Stack[Maxx];
int isFull()
{
    if (top == Maxx - 1)
        return 1;
    else
        return 0;
}
void push(int x)
{
    if (isFUll)
    {
        cout << "OverFlow" << endl;
        return;
    }
    else
        Stack[++top] = x;
}
void pop()
{
    if (top == -1)
    {
        cout << "UnderFlow" << endl;
    }
    else
        return Stack[top--];
}

int main()
{
    push(10);
    push(32);
    push(11);
    pop();

    return 0;
}