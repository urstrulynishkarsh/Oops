#include<iostream>
using namespace std;


// this is a diamond problem  when two same  data member collide like class a and b have same data member name then  collison will come so we can solve this problem using scope resolution operator 

class A{
    public:
        int physics;
        int Chemistry;

        A()
        {
            this->physics=0;
            this->Chemistry=0;
        }
};

class B{
    public:
        int Chemistry;
        int physics;
};

class C:public A,public B{
    public:
        int Math;
};

int main()
{
    C obj;
    // we can solve this diamond problem by using scope resolution operator
    cout<<obj.A::physics<<" "<<obj.B::Chemistry<<" "<<obj.Math<<endl;

}