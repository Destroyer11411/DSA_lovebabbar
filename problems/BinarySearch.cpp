// Finding first and last occurance of an element in an sorted array

#include<bits/stdc++.h>
using namespace std;


int leftoccurance(int a[],int n,int key);
int rightoccurance(int a[],int n,int key);

int main()
{
    int n;
    cout<<"Enter the length of the array"<<endl;
    cin>>n;

    int i,key;
    int a[n];

    cout<<"Enter the sorted array"<<endl;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the key to be found"<<endl;
    cin>>key;

    int l,r;

    l = leftoccurance(a,n,key);
    r = rightoccurance(a,n,key);

    cout<<l<<" "<<r<<endl;
    cout<<"And the number of occurance of the element is"<<endl;
    int tot = (r-l)+1;
    cout<<tot<<endl;


    return 0;


}



int leftoccurance(int a[],int n,int key)
{
    int l=0,r=n-1;
    int ans=-1;

    int mid=0;

    while(l<=r)
    {
        mid = (l+r)/2;

        if(key==a[mid])
        {
            ans = mid;
            r = mid-1;
        }

        else if(key>a[mid])
        {
            l = mid+1;
        }

        else if(key<a[mid])
        {
            r = mid-1;
        }
    }

    return ans;
}

int rightoccurance(int a[],int n,int key)
{
    int l=0,r=n-1;
    int mid=0;
    int ans = -1;

    while(l<=r)
    {
        mid = (l+r)/2;

        if(key==a[mid])
        {
            ans = mid;
            l = mid+1;
        }

        else if(key<a[mid])
        {
            r = mid-1;
        }

        else if(key>a[mid])
        {
            l= mid+1;
        }

    }

    return ans;
}