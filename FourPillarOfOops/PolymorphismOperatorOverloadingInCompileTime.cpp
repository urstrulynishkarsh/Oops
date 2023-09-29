#include<iostream>
using namespace std;



class parameter{
    public:
    int val;
    void operator + (parameter &obj2)
    {
        int value1=this->val;
        int value2=obj2.val;
        cout<<"this difference between them is: "<<value1-value2;
    }
};

int main(){

    parameter obj1,obj2;
    obj1.val=7;
    obj2.val=4;

    // this should print the differnce between them
    obj1+obj2;

}