#include<iostream>
using namespace std;

class abc{
    public:
    int x;
    int *y;

    // abc()
    // {
    //     x=0;
    //     y=new int(0);
    // }
     abc(int _x,int _y):x(_x),y(new int(_y)){}
    // by default dumb constructor call for shallow copy
    // abc(const abc &obj)
    // {
    //     cout<<"our shallow copy constructor call: "<<endl;
    //     x=obj.x;
    //     y=obj.y;
    // }


    // our smart deep copy
    abc(const abc &obj)
    {
           cout<<"our deep copy constructor call: "<<endl;
        x=obj.x;
        y=new int(*obj.y);
    }

    
   
    void print() const
    {
        printf("X: %d\nAddress of Y pointer:%p\nValue of Y is: %d\n",x,y,*y);
    }
    ~abc(){
        delete y;
    }
};

int main()
{
    // abc a(10,20);
    // cout<<"printing value of a object: "<<endl;
    // a.print();
    // cout<<endl;
    // abc b=a;
    //   cout<<"printing value of b object: "<<endl;
    // b.print();
    // cout<<endl;
    // b.x=20;
    // *b.y=30;
    //     cout<<"printing value of b object: "<<endl;
    // b.print();
    // cout<<endl;
    // a.x=50;
    // cout<<"printing value of a object: "<<endl;
    //  a.print();



    abc *a= new abc(10,20);
    abc b=*a;
    delete a;
    b.print();
    
}