#include<bits/stdc++.h>
using namespace std;

bool IsSorted(int a[],int n)
{
    bool ans;
    if(n==0 || n==1)
        return true;
    if(a[0]>a[1])
        return false;
    else
        ans = IsSorted(a+1,n-1);
        return ans;
}

int main()
{
    // int n;
    // cout<<"Enter the array size"<<endl;
    // int a[n] = ;
    // cout<<"Enter the valuees of the array"<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     cin>>a[i];
    // }

    int n=5;
    int a[5] = {1,2,3,4,5};

    if(IsSorted(a,n))
        cout<<"Sorted"<<endl;

    else 
        cout<<"Not sorted"<<endl;
    return 0;
}