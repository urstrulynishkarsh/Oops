#include<iostream>
using namespace std;

//  protected can be inherit  but private can't be inherit 
class Animal{
    protected:
        int age;
        int weight;
};


class Dog:private Animal{
    public:
        void print()
        {
            cout<<this->age;
        }
};




int main()
{
    Dog d;
    d.print();
}