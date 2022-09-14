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

int main()
{

    vector<int> v1;
    vector<int> v2;

    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);
    v1.push_back(9);

    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(6);

    vector<int> v3;

    int i,j;
    int k=0,l=0;

    int n = v1.size() + v2.size();

    for(i=0;i<10;i++)
    {
        if(v1[k] < v2[l])
        {
            v3.push_back(v1[k]);
            k++;
        }

        if(v2[l]<v1[k])
        {
            v3.push_back(v2[l]);
            l++;
        }

        
    }

    if(k!=v1.size())
    {
        for(i = k;i<v1.size();i++)
        {
            v3.push_back(v1[i]);
        }
    }

    printvec(v3);



}