#include<bits/stdc++.h>
using namespace std;

// Simple Implementation
// All are O(1) except for dequeue which is O(n)
struct Queue
{
    int size,cap;
    int *arr;
    Queue(int c)
    {
        cap=c;
        arr=new int[cap];
    }

    bool isFull()
    {
        return cap==size;
    }

    bool isEmpty()
    {
        return size==0;
    }

    void enqueue(int x)
    {
        if (isFull())
        {
            return;
        }
        arr[size]=x;
        size++;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            return;
        }
        for (int i=0;i<size-1;i++)
        {
            arr[i]=arr[i+1];
        }
        size--;
    }

    int getFront()
    {
        if (isEmpty()){
            return -1;
        }
        return 0;
    }

    int getRear(){
        if (isEmpty()){
            return -1;
        }
        return size-1;
    }
};


int main()
{
    Queue q(8);
    q.enqueue(4);
    q.enqueue(6);
    q.enqueue(5);
    cout<<q.getFront()<<endl;
    cout<<endl;
    return 0;
}