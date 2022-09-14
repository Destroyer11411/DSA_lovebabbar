#include<bits/stdc++.h>
using namespace std;

bool check(string a,int s,int e)
{
    //Base condition
    if(s>e)
        return true;
    if(a[s]!=a[e])
        return false;
    s++;
    e--;
    return check(a,s,e);
}

int main()
{
    string a;
    cout<<"Enter the string to check pallindrome"<<endl;
    cin>>a;

    if(check(a,0,a.length()-1))
        cout<<"Yes, The given string is an pallindrome"<<endl;
    else
        cout<<"Nope, The string is not an pallindrome"<<endl;

    return 0;
}