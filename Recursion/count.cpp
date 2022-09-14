#include<bits/stdc++.h>
using namespace std;

void count(int n)
{
    if(n==0)
    {
        exit(0);
    }

    cout<<n<<endl;
    count(n-1);
}

int main()
{
    int n;
    cout<<"Enter the number to be counted from"<<endl;
    cin>>n;

    count(n);

    return 0;
}