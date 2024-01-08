#include<bits/stdc++.h>

using namespace std;

#define size 100

class Stack
{
    int top;
    int arr[size];
    public :
        Stack()
        {
            top = -1;
        }
    
    int topele()
    {
        return arr[top];
    }
    bool empty()
    {
        if(top == -1)
            return true;
        return false;
    }

    bool full()
    {
        if(top == size-1)
            return true;
        return false;
    }
    void push(int data)
    {
        if(!full())
        {
            top++;
            arr[top] = data;
        }
        return ;
    }
    void pop()
    {
        if(!empty()){
            top--;
        }
        return ;
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    while(!s.empty())
    {
        cout << s.topele() << " ";
        s.pop();
    }
    
    return 0;
}