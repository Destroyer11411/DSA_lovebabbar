#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[],int n)
{
    //Base case
    if(n==0 || n==1)
    {
        return ;
    }

    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            swap(a[i],a[i+1]);
        }
    }

    bubbleSort(a,n-1);
}

int main()
{
    int a[5] = {4,2,6,3,9};
    int n = 5;

    bubbleSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}