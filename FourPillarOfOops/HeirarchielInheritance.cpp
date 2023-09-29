#include<iostream>
using namespace std;

class Car{
    public:
        int weight;
        int age;
        void speed(){
            cout<<"Need More Speed"<<endl;
        }

};


class Fortuner:public Car{
    
};

class BMW:public Car{

};


int main()
{
    BMW b;
    cout<<b.age<<endl;
    cout<<b.weight<<endl;
    b.speed();


    Fortuner f;
    cout<<f.age<<endl;
    cout<<f.weight<<endl;
    f.speed();


}