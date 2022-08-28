#include <bits/stdc++.h>
using namespace std;

struct MyStack
{
    int *arr;
    int cap;
    int top;
    MyStack(int cap)
    {
        cap = cap;
        arr = new int[cap];
        top = -1;
    }

    void push(int x)
    {
        if (top == cap - 1)
        {
            cout << "Stack Overflow!\n";
        }
        top++;
        arr[top] = x;
    }

    int pop()
    {
        if(top==-1)
        {
            cout<<"Underflow!\n";
            return -1;
        }
        int res=arr[top];
        top--;
        return res;
    }

    int size()
    {
        if(top==-1)
        {
            cout<<"Underflow!\n";
            return -1;
        }
        return top+1;
    }

    int peek()
    {
        if(top==-1)
        {
            cout<<"Underflow!\n";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty()
    {
        return (top==-1);
    }
};

struct MyStackVector
{
    vector<int> v;

    void push(int x)
    {
        v.push_back(x);
    }
    int pop()
    {
        int res=v.back();
        v.pop_back();
        return res;
    }
    int peek()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }

    bool isEmpty()
    {
        return v.empty();
    }
};


int main()
{
    MyStack s(5);

    cout<<s.pop()<<endl;
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);

    cout<<s.peek()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;



    cout << endl;
    return 0;
}