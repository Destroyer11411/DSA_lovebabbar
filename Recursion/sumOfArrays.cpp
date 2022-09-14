#include<bits/stdc++.h>
using namespace std;

int sumOfArray(int a[],int n)
{
    int ans=0;
    //Base condition
    if(n==0)
        return 0;
    if(n==1)
        return a[0];
    
    // f(n) = f(0)+f(1)
    return (a[0] + sumOfArray(a+1,n-1)); 


}

int main()
{
    int n=5;
    int a[5] = {1,2,3,4,5};

    int ans = sumOfArray(a,n);
    cout<<"Sum of the elements are "<<ans<<endl;

    return 0;
}