#include<bits/stdc++.h>
using namespace std;

void rev(string &a,int s,int e)
{
    if(s>e)
        return ;
    
    swap(a[s],a[e]);

    s++;
    e--;

    rev(a,s,e);
}



int main()
{
    string a;
    cout<<"Enter the string"<<endl;
    cin>>a;

    rev(a,0,a.length()-1);

    cout<<a<<endl;

    return 0;
}