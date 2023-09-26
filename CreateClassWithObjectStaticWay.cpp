#include <iostream>
using namespace std;

class student
{
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
}

