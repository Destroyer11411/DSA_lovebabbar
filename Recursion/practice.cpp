//power of any number
#include<bits/stdc++.h>
using namespace std;

int factorial(int a,int n)
{
    //Base condition
    if(n==0)
        return 1;
    
    return a*factorial(a,n-1);
}

int main()
{
    int n;
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    cout<<"Enter the power"<<endl;
    cin>>n;
    int ans = factorial(a,n);
    cout<<ans<<endl;

    return 0;


}





