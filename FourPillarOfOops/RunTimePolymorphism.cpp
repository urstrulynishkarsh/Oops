#include<iostream>
using namespace std;

// function method overridding   when we defind custom methos in any class then method overdding comes in this case
class Animal{
    public:
       virtual void speak()
        {
            cout<<"Animal Speaking"<<endl;
        }
};
class Dog:public Animal{
    public:
        // overridding
        void speak()
        {
            cout<<"Dog barking"<<endl;
        }
};
int main()
{
    Dog d1;
    d1.speak(); //Dog barking

    Animal a;
    a.speak(); //Animal Speaking


    // it will always call pointer function   these methods are called upcasting
    Animal *Lion=new Animal;
    Lion->speak(); //Animal Speaking 

    Dog *German=new Dog;
    German->speak(); //Dog barking



    // these method are called downcasting

    Dog *chihuaha= (Dog *) new Animal;   //if we want to call dog method then we can use virtual keyword in animal class function
    chihuaha->speak(); //Dog barking



// these methods are called upcasting
    Animal *Tiger=new Dog;
    Tiger->speak(); // //Animal Speaking



}