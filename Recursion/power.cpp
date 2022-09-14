#include<bits/stdc++.h>
using namespace std;

int power(int n)
{
    // base case
    if(n==0)
    {
        return 1;
    }

    // recursive relation

    int big = power(n-1);
    int ans = 2 * big;

    return ans;


}

int main()
{

    int n;
    cout<<"Enter the value of power of 2"<<endl;
    cin>>n;

    int ans = power(n);

    cout<<ans<<endl;


}