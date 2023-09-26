#include<iostream>
using namespace std;

class Student{
    private:
    int weight;

public:
    // properties 
    // if we don't define the data members  public /private then by default it comes in private 
    string name;
    int age;

    // behaviors
    void sleep()
    {
        cout << "he is sleeping" << endl;
    }
    void eat()
    {
        cout << "he  is eating mangos "<<endl;
    }

    int getweight()
    {
        return weight;
    }

    // int setweight(int w)
    // {
    //     weight = w;
    // }

    // this is in good practice 
    // this is a pointer to current object 
    void setweight(int weight)
    {
        this->weight = weight;
    }

};
int main()
{
    // we can assign  Dynamic Memory Allocation by using new keyword
    // new int return an address from the heap memory location

    Student *nishkarsh=new Student;
    // (*nishkarsh).age=15;
    // (*nishkarsh).name="ricky";
    // cout<<(*nishkarsh).age<<endl;
    // cout<<(*nishkarsh).name<<endl;
    nishkarsh->age=17;
    nishkarsh->name="ricky verma";
    cout<<nishkarsh->age<<endl;
    cout<<nishkarsh->name<<endl;
    nishkarsh->eat();
    nishkarsh->sleep();

}
