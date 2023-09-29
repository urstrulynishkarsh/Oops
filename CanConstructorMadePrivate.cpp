#include<iostream>
using namespace std;
class A{
    private:
    int x;
     A(int _x):x(_x){};

    //  we can inintalizze if we don't create object 

    public:
       

        void setX(int _x)
        {
            this->x=_x;
        }
        int getX() const
        {
            return x;
        }

        friend class BoxFactory;
};


class BoxFactory{

    int count;
    public:
    A getABox(int _w)
    {
        ++count;
        return A(_w);
    }

};

 
int main(){
    // A b(18);
    // cout<<b.getX();

    BoxFactory bfact;
    A b=bfact.getABox(5);
    cout<<b.getX();
}