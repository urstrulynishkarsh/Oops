#include<iostream>
using namespace std;
class Animal{
    private:
    int weight;

    public:
    int age;
    string name;

    // default constructor call if we don't make a constructor
    // when we create object constructor will call 
    // work of constructor is object intialization  there is no return type, name same as class, initialize object


    Animal()
    {
        cout<<"Constructor called"<<endl;
        this->age=0;
        this->weight=0;
        this->name="Tiger";
    }


    // parameterized constructor
    Animal(int age,int weight)
    {
        cout<<"parametrized constructor called"<<endl;
        this->age=age;
        this->weight=weight;


    }

    int getweight()
    {
        return weight;
    }
    void eat(){
        cout<<"lion eats meat"<<endl;
    }
    void leg(){
        cout<<"lion have four legs"<<endl;
    }
};
int main()
{
    Animal Lion;
    Lion.eat();
    cout<<Lion.age<<endl;
    cout<<Lion.getweight()<<endl;
    cout<<Lion.name<<endl;


    Animal *tiger=new Animal;

    Animal Cheetah(10,40);
        cout<<Cheetah.age<<endl;
    cout<<Cheetah.getweight()<<endl;

     Animal *cow=new Animal(20,150);
       cout<<cow->age<<endl;
    cout<<cow->getweight()<<endl;




}