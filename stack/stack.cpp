// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     stack <int> s;
//     s.push(2);
//     s.push(3);

//     s.pop();

//     cout<<"The topmost element is "<<s.top()<<endl;
//     cout<<"Checking if the stack is empty "<<s.empty()<<endl;
//     cout<<s.size()<<endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Stack
{
    // properties
public:
    int *arr;
    int top;
    int size;

    // behaviour
    // Constructor
    Stack(int s)
    {
        this->size = s;
        arr = new int[size];
        top = -1;
    }

    void push(int ele)
    {
        if (size - top > 1)
        {   top++;
            arr[top] = ele;
        }

        else
        {
            cout<<"Stack overflow"<<endl;
        }
    }

    void pop()
    {
        if(top>=0)
        {
            top--;
        }
        else
        {
            cout<<"Stack underflow"<<endl;
        }
    }

    int peek()
    {
        if(top>=0 && top<size)
        return arr[top];

        else
        cout<<"Stack is empty"<<endl;
    }

    bool isEmpty()
    {
        if(top==-1)
        return true;


        else
        return false;
    }
};

int main()
{
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);

    st.push(22);
    st.push(43);
    st.push(44);

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.peek()<<endl;
    st.pop();
    

    if(st.isEmpty())
    cout<<"Stack is not empty"<<endl;

    else
    cout<<"Stack is empty"<<endl;


    return 0;
}