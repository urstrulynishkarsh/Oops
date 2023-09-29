#include<iostream>
using namespace std;

class Fruit{
    public:
        string name;

};

// fortuner is a car 
// is a relation comes inheritance 
class Mango:public Fruit{
    public:
     int weight;
};

class Alphanso:public Mango{
    public:
     int sugarLevel;
};


int main(){
    Alphanso A;

    cout<<A.sugarLevel<<" "<<A.weight<<" "<<A.sugarLevel<<endl;
    
}