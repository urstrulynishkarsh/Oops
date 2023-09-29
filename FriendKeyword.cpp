#include<iostream>
using namespace std;
// by using friend keyword we can acces private data member to another class
class A{
    private:
    int x;
    public:
        A(int _x):x(_x){};

        int getX() const {
            return x;
        }
        void setX(int _x)
        {
            x=_x;
        }
    friend class B;
    friend void print(const A &);
};

class B{
    public:
        void print(const A &a)
        {
            // cout<<a.getX()<<endl;
            cout<<a.x;
        }
};
 void print(const A &a)
        {
            // cout<<a.getX()<<endl;
            cout<<a.x;
        }





int main(){
    A a(5);
    B b;
    b.print(a);

}