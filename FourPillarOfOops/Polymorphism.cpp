#include<iostream>
using namespace std;


// existing in many forms 
// they are two types compile time and run time 


// compile time are two types operator overloading and function overloading



// function overloading sum function  in mutile form with same name but number of parameter different

class Math{
    public:
    int sum(int a,int b)
    {
        cout<<"i am now in first signature"<<endl;
        return a+b;
    }
    int sum(int a,int b,int c)
    {
        cout<<"i am now in second signature"<<endl;
        return a+b+c;
    }
    int sum(int a,float b)
    {
        cout<<"i am now in third signature"<<endl;
        return a+b+10;
    }
    // if we do function overloading then we don't change in return type with same name only change in number of parameter and type of variable
    double sum(int a,int b)
    {
        return 700;
    }

};

int main(){
    Math m;

    cout<<m.sum(10,20);
    cout<<m.sum(10,20,30);
    cout<<m.sum(10,5.1f);
}
