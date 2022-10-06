#include<bits/stdc++.h>
using namespace std;

class Hero{

    private:
    // int health;
    // char level;


    public:
    int health;
    char level;

    // Default Constructor
    Hero(){
        cout<<"Constructor called"<<endl;
    }

    // Parameterised  constructor
    Hero(int health,char level){
        this->health = health;
        this->level = level;
    }

    // Copy Constructor
    Hero(Hero &temp) {
        cout<<"Copy constructor calles"<<endl;
        this ->health = temp.health;
        this ->level = temp.level;
    }




};

int main()
{
    Hero h;
    Hero hh(80,'A');
    Hero hhh(hh);

    cout<<hhh.level<<endl;

}