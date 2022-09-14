#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<234%10<<endl;
    cout<<234/10<<endl;

    int t=234;
    for(int i=0;i<3;i++)
    {
        
        cout<<t%10<<endl;
        t = t%10;
    }
}