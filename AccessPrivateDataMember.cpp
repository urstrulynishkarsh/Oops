#include <iostream>
using namespace std;

class student
{
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
        cout << "he  is eating mangos ";
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
    void setweight(int weight)
    {
        this->weight = weight;
    }
};

int main()
{
    // static object
        student nishkarsh;
        nishkarsh.name = "verma";
        cout << nishkarsh.name << endl;
        cout << nishkarsh.age << endl; // it will give garbage value
        nishkarsh.age = 15;
        cout << nishkarsh.age << endl;
        nishkarsh.sleep();
        nishkarsh.eat();
        nishkarsh.setweight(67);
        cout<<endl;
        cout<<"Weight is "<<nishkarsh.getweight();
}