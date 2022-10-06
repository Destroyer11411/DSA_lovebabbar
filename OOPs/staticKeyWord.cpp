#include<bits/stdc++.h>
using namespace std;


class Hero{
    public:

    static int  time;

    static int random() {
        return time;
    }

}; 
int Hero :: time = 5;

int main()
{
    cout<<Hero::time<<endl;
    cout<<Hero::random()<<endl;
    
}