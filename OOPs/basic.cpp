// // #include<bits/stdc++.h>
// // #include "other.cpp"
// // using namespace std;


// // // creation of an class
// // class Hero{
// //     // Properties.
// //     public:
// //     int health;
// //     char level;
// // };

// // int main()
// // {   
// //     // creation of an object
// //     Hero h1;
// //     //other o1;

// //     h1.health=70;
// //     h1.level='A';

// //     cout<<"Health is "<<h1.health<<endl;
// //     cout<<"Level is "<<h1.level<<endl;

// //     //cout<<o1.a<<endl;
// //     //cout<<sizeof(h1)<<endl;
     

// // }



// // Implementing codes using Getters and setters

// #include<bits/stdc++.h>
// #include "other.cpp"
// using namespace std;


// // creation of an class
// class Hero{
//     // Properties.

//     private:
//     int health;

//     public:
    
//     char level;

//     void print(){
//         cout<<level<<endl;
//     }


//     // Getters and setters

//     int getHealth() {
//         return health;
//     }

//     char getLevel() {
//         return level;
//     }


//     void setHealth(int a) {
//         health = a;
    
//     }


//     void setLevel(char b){
//         level = b;
//     }


    
    
// };

// int main()
// {   
//     // creation of an object
//     Hero h1;
//     //other o1;

//     //h1.health=70;
//     h1.setHealth(70);
//     h1.level='A';

//     //cout<<"Health is "<<h1.health<<endl;
//     cout<<"Level is "<<h1.level<<endl;

//     cout<<h1.getHealth()<<endl;

//     //cout<<o1.a<<endl;
//     //cout<<sizeof(h1)<<endl;
     

// }




#include<bits/stdc++.h>
using namespace std;

class test{
    float f;
    double d;
    int i;
    char c;
};

int main()
{
    // STatic allocation
    test t1;

    // Dynamic allocation
    test *b = new test;

    cout<<sizeof(t1)<<endl;
    // ans 24
    cout<<sizeof(*b)<<'\n';
}