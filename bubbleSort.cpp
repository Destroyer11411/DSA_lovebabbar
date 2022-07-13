#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int> a);
void bubblesort(vector<int> &a);


int main()
{
    vector<int> a;
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;

    int z;

    for(int i=0;i<n;i++)
    {
        cin>>z;
        a.push_back(z);
    }

    cout<<"Before sort"<<endl;
    printvec(a);

    bubblesort(a);

    cout<<"After sort"<<endl;
    printvec(a);

    return 0;
}

void printvec(vector<int> a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";

    }
    cout<<endl;
}


void bubblesort(vector<int> &a)
{
    for(int i=0;i<a.size()-1;i++)
    {
        for(int j=0;j<a.size()-i-1;j++)
        {
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }
}