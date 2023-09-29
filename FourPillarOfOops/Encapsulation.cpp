#include<iostream>
using namespace std;


// class working as capsule in which we wrap the data members and data function that means in encapsulation we just do data Hiding in the class  by default we are doing encapuslation  if we marked private our data members  then perfect encapsulation comes we can acces private data meber by using getter setter method
// ex- remote cell covered by a cap 
class Nishkarsh{
    // public:
    //     int age;
    //     int weight;
    //     string name;
    //     void sleep()
    //     {
    //         cout<<"i am now sleeping";
    //     }



       private:
        int age;
        int weight;
        string name;
       


        public:
        void sleep()
        {
            cout<<"i am now sleeping";
        }
        int getage()
        {
            return age;
        }
        void setage(int age)
        {
            this->age=age;
        }

    
};


int main(){
    Nishkarsh a;
    a.setage(10);
    cout<<a.getage()<<endl;
    // cout<<a.weight<<endl;
    a.sleep();

}