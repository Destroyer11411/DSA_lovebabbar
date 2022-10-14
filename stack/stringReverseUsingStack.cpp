// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {   
//     string st = "Rakesh";

//     stack <char> s;


//     for(int i=0;i<st.length();i++)
//     {
//         char ch = st[i];
//         s.push(ch);
//     }

//     string ans ="";

//     while(!s.empty())
//     {
//         char ch = s.top();
//         ans.push_back(ch);

//         s.pop();
//     }

//     cout<<"The reversed string is "<<ans<<endl;

//     return 0;
// }












// building stack using classes

#include<bits/stdc++.h>
using namespace std;

class Stack {
    public:
    int top;
    int size;
    char *arr;


    Stack(int size)
    {
        this->size = size;
        top =-1;
        arr = new char[size];

    }


    void push(char ele)
    {
        if(size-top>1)
        {
            top++;
            arr[top] = ele;
        }
    }
    void pop()
    {
        if(top>=0)
        {
            top--;
        }
    }

    char peek()
    {
        if(top>=0 && top<size)
        {
            return arr[top];
        }
    }

    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }




};

int main()
{

    Stack s(5);
    string a = "BABBA";

    for(int i=0;i<a.length();i++)
    {
        char ch = a[i];
        s.push(ch);
    }

    string ans="";

    while(!s.isEmpty())
    {
        char ch = s.peek();
        ans.push_back(ch);
        s.pop();
    }

    cout<<"The reversed string is "<<ans<<endl;


    return 0;
}