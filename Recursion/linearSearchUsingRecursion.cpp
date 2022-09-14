#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int a[],int n,int k)
{
    // Base condition
    bool ans;

    if(n==0)
        return false;
    else
        if(a[0]==k)
            return true;
        else
            ans = linearSearch(a+1,n-1,k);
            return ans;
    
}

int main()
{
    int n=5;
    int a[5] = {2,5,1,7,6};

    int k = 5;

    if(linearSearch(a,n,k))
        cout<<"Found the element"<<endl;
    else
        cout<<"The element was not found"<<endl;
    
    return 0;
}