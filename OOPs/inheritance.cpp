// #include<bits/stdc++.h>
// using namespace std;


// class Human {
//     public:
//     int height;
//     int weight;
//     int age;

//     public:
//     int getHeight() {
//         return this->height;
//     }

//     void setWeight(int weight) {
//         this->weight = weight;
//     }

//     int getWeight() {
//         return this->weight;
//     }

    

// };

// class Male: public Human{

//     public:
//     string color;

//     void sleep() {
//         cout<<"Male sleeping"<<"\n";
//     }
// };




// int main()
// {
//     Male obj1;
//     cout<<obj1.age<<endl;
//     cout<<obj1.weight<<endl;
//     cout<<obj1.height<<endl;
//     cout<<obj1.color<<endl;

//     obj1.setWeight(84);

//     cout<<obj1.weight<<endl;

//     obj1.sleep();
    

// }







// #include<bits/stdc++.h>
// using namespace std;


// class Human {
//     public:
//     int height;
//     int weight;
//     int age;

//     public:
//     int getHeight() {
//         return this->height;
//     }

//     void setWeight(int weight) {
//         this->weight = weight;
//     }

//     int getWeight() {
//         return this->weight;
//     }

    

// };

// class Male: protected Human{

//     public:
//     string color;

//     void sleep() {
//         cout<<"Male sleeping"<<"\n";
//     }

//     int getHeightt() {
//         return this->height;
//     }
// };




// int main()
// {
//     Male obj1;
    

//     // Not possible to directly call the data member
//     //cout<<obj1.height<<endl;

//     cout<<obj1.getHeightt() <<endl;

    

// }





#include<bits/stdc++.h>
using namespace std;


class Human {
    public:
    int height;
    int weight;
    int age;

    public:
    int getHeight() {
        return this->height;
    }

    void setWeight(int weight) {
        this->weight = weight;
    }

    int getWeight() {
        return this->weight;
    }

    

};

class Male: private Human{

    public:
    string color;

    void sleep() {
        cout<<"Male sleeping"<<"\n";
    }

    int getHeightt() {
        return this->height;
    }
};




int main()
{
    Male obj1;
    

    // Not possible to directly call the data member
    //cout<<obj1.height<<endl;

    cout<<obj1.getHeightt() <<endl;

    

}