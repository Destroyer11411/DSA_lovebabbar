// Single inheritance
// #include<bits/stdc++.h>
// using namespace std;

// class Animal {

//     public:
//     int age;
//     int weight;

//     public:
//     void speak() {
//         cout<<"Speaking"<<endl;
//     }
// };

// class Dog:public Animal {

// };

// int main()
// {
//     Dog d;
//     d.speak();
//     return 0;

// }

// multi-level inheritance
// #include<bits/stdc++.h>
// using namespace std;

// class Animal {

//     public:
//     int age;
//     int weight;

//     public:
//     void speak() {
//         cout<<"Speaking"<<endl;
//     }
// };

// class Dog:public Animal {

// };

// class German:public Dog{

// };

// int main()
// {
//     Dog d;
//     German g;
//     g.speak();
//     return 0;

// }

// Multiple Inheritance
// #include<bits/stdc++.h>
// using namespace std;

// class Animal {

//     public:
//     int age;
//     int weight;

//     public:
//     void bark() {
//         cout<<"Barking"<<endl;
//     }
// };

// class Human{
//     public:
//     string color;

//     void speak()
//     {
//         cout<<"Speaking"<<endl;
//     }
// };

// class Hybrid: public Animal, public Human {

// };

// int main()
// {
//     Hybrid h;
//     h.speak();
//     h.bark();

// }

// Hierarchical Inheritance
#include <bits/stdc++.h>
using namespace std;

class Animal
{

public:
    int age;
    int weight;

public:
    void speak()
    {
        cout << "Speaking" << endl;
    }

    void checka()
    {
        cout << "inside class Animal" << endl;
    }
};

class Dog : public Animal
{
public:
    void checkd()
    {
        cout << "Inside class Dog" << endl;
    }
};

class Cat : public Animal
{
public:
    void checkc()
    {
        cout << "Inside class Cat" << endl;
    }
};

int main()
{
    Animal a;
    Dog d;
    Cat c;

    a.checka();
    d.checkd();
    c.checkc();
    return 0;
} 