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


    // parameterized constructor
    Animal(int age,int weight)
    {
        cout<<"parametrized constructor called"<<endl;
        this->age=age;
        this->weight=weight;


    }


    // copy constructor by default our constructor do shallow copy  to save from the shallow copy we do deep copy

    Animal(Animal &obj)
    {
        cout<<"I am now in copy Constructor"<<endl;
        this->age=obj.age;
        this->weight=obj.weight;

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
    Animal lion(30,70);
    Animal tiger=lion;
    Animal cow(tiger);

}