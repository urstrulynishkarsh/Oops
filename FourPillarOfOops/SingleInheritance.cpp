#include<iostream>
using namespace std;

class car{
    public:
        int weight;
        string name;

        void Break()
        {
            cout<<"Break section"<<endl;
        }
        void speed()
        {
            cout<<"Need for Speed"<<endl;
        }

};

// fortuner is a car 
// is a relation comes inheritance 
class Fortuner:public car{
    public:
    void automatic(){
        cout<<"This is Automatic Car";
    }
};
int main(){
    Fortuner f1;
    f1.speed();

    f1.automatic();
}