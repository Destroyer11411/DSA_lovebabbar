#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int> a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";

    }
    cout<<endl;
}

void insertionSort(vector<int> &a);

int main()
{
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    vector<int> a;
    int c;

    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        a.push_back(c);
    }

    cout<<"Before sorting"<<endl;

    printvec(a);

    insertionSort(a);

    cout<<"After sorting"<<endl;
    printvec(a);

    return 0 ;




}



void insertionSort(vector<int> &a)
{
    int i,key,j;

    for(i=1;i<a.size();i++)
    {
        key = a[i];
        j=i-1;

        while(j>=0 && a[j]>key)
        {
            a[j+1] = a[j];
            j = j-1;
        }

        a[j+1]=key;


    }
}



