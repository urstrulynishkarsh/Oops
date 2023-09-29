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

    public:
        void Break()
        {
            cout<<"Break is very Powerfull"<<endl;
        }
};

class BMW:public Car{

};
class Defender:public Fortuner{

};
int main(){

    BMW b;
    cout<<b.age<<endl;
    cout<<b.weight<<endl;
    b.speed();


    Fortuner f;
    cout<<f.age<<endl;
    cout<<f.weight<<endl;
    f.speed();


    Defender d;
      cout<<d.age<<endl;
    cout<<d.weight<<endl;
    d.speed();
    d.Break();



}