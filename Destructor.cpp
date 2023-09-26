#include<iostream>
using namespace std;

class Animal{
    private:
    int weight;

    public:
    int age;
    string name;

    Animal()
    {
        cout<<"Constructor called"<<endl;
        this->age=0;
        this->weight=0;
        this->name="Tiger";
    }


    // no return type no input we can identify through ~ this sign
    ~Animal()
    {
        cout<<"I am now inside Destructor"<<endl;
    }
};

int main(){


    // in a destructor when we make an object statically then it will destruct automatically and if we make an object dynamically then we need to destruct manually
    // this will call automatically constructor and destructor
    
    Animal a;
    a.age=12;
    cout<<a.age<<endl;
    Animal *b=new Animal;
    b->age=14;
    cout<<b->age<<endl;

    
    // now we need to delete manually 
    delete b;







}