#include<iostream>
using namespace std;

class abc{


    // we can change the const value by using mutable keyword this keyword this used for debugging 
    int x;
    int *y;
    int z;

    public:
    // abc()
    // {
    //     x=0;
    //     y=new int(0);
    // }
    // abc(int _x,int _y,int _z=0)
    // {
    //     x=_x;
    //     y=new int(_y);
    //     z=_z;
    // }
    int getX() const
    {
        return x;

    }
    int getY() const
    {
        return *y;
    }
    void setX(int value) 
    {
        this->x=value;

    }
    void setY(int value)
    {
        *y=value;
    }
    int getZ() const{
        return z;
    }

   

    // // initialiazation list
    // benefit of this when i marked const any data member then can change in initialiazation list 
     abc(int _x,int _y,int _z=0):x(_x),y(new int(_y)),z(_z){}
};
 void print(const abc &a)
    {
        cout<<a.getX()<<" "<<a.getY()<<" "<<a.getZ()<<endl;
    }

int main()
{
    // abc a;
    // cout<<a.getX()<<endl;
    // cout<<a.getY()<<endl;


    // abc d(1,2);
    // cout<<d.getX()<<endl;
    // cout<<d.getY()<<endl;


    // abc e;
    // e.setX(10);
    // e.setY(20);
    // cout<<e.getX()<<endl;
    //   cout<<e.getY()<<endl;

    abc a(10,12);
    print(a);


}