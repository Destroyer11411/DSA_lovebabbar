#include<bits/stdc++.h>
using namespace std;

int factn(int n)
{
    if(n==0)
        return 1;

    int ans = n * factn(n-1);

    return ans;
}


int main()
{
    int n;
    cout<<"Enter the number factorial to be calculated on"<<endl;
    cin>>n;


    cout<<factn(n)<<endl;

    return 0;
}