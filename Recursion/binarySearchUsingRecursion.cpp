#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int a[],int s,int e,int k)
{
    // Base condition
    if(s>e)
        return false;
    
    int mid = s+(e-s)/2;
    
    if(a[mid]==k)
        return true;
    
    if(a[mid] < k)
        return binarySearch(a,mid+1,e,k);
    else
        return binarySearch(a,s,mid-1,k);
}

int main()
{
    int n=5;
    int a[5] = {1,3,6,8,9};
    int k=6;
    //int k=44;

    if(binarySearch(a,0,4,k))
        cout<<"Found the element"<<endl;
    else
        cout<<"Element not found"<<endl;
    return 0;
}