#include <bits/stdc++.h>
using namespace std;

const int maxSize = 3;
int item[maxSize];
int size = 0;

class Queue
{
private:
    int front = -1, rear = -1;

public:
    bool isEmpty()
    {
        if (front == -1)
        {
            return true;
        }
        else
            return false;
    }
    bool isFull()
    {
        if ((front == 0 && rear == maxSize - 1) || (front == rear + 1))
        {
            return true;
        }
        else
            return false;
    }
    void push(int x)
    {
        if (isFull())
        {
            cout << "OVERFLOW" << endl;
        }
        else
        {
            if (front == -1)
            {
                front = 0;
            }
            rear = (rear + 1) % maxSize;
            item[rear] = x;
            size++;
        }
    }

    void display()
    {
        int i;
        for (i = front; i != rear; i = (i + 1) % maxSize)
        {
            cout << item[i] << " ";
        }
        cout << item[i];
        cout << endl;
    }
};
int main()
{
    Queue q;
    q.push(10);
    q.display();
    q.push(20);
    q.display();
    q.push(30);
    q.display();
    q.push(40);
    q.display();
}